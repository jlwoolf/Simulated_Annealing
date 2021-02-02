//
// Created by jonat on 01/12/21.
//

#include "Partition.h"

#include <utility>

Partition::Partition() {
    numSets = 20;
    seed = std::time(0);
    generateInput(1000);
}
Partition::Partition(const std::string& filename) {
    seed = std::time(0);
    setInput(filename);
}
Partition::Partition(int seed, int numPoints, int numSets) : numSets(numSets) {
    seed = std::time(0);
    generateInput(numPoints);
}

void Partition::setInput(const std::string& filename) {
    int n; input.clear();
    std::ifstream fin(filename);

    fin >> n;
    fin >> numSets;
    for(int i = 0; i < n; i++) {
        int x, y, z;
        fin >> x >> y >> z;
        input.emplace_back(Point(x,y,z,i+1));
    }
}
void Partition::generateInput(int size) {
    input.clear();
    for(int i = 0; i < size; i++) {
        Point p;
        do {
            p = Point(randomInt(-1000, 1000), randomInt(-1000, 1000), randomInt(-1000, 1000), i + 1);
        }while (std::find(input.begin(), input.end(), p) != input.end());
        input.emplace_back(p);
    }
}

void Partition::generateInput(int size, int sets) {
    numSets = sets;
    generateInput(size);
}

Partition::cost Partition::getSolutionCost(const std::list<std::list<Point>>& solution) {
    cost maxCost;
    for(const std::list<Point>& set : solution) {
        cost setCost = getSetCost(set);
        if(setCost.distance > maxCost.distance) {
            maxCost = setCost;
        }
    }
    return maxCost;
}
Partition::cost Partition::getSetCost(std::list<Point> set) {
    cost setCost;

    for(const Point& pointi : set) {
       for(const Point& pointj : set) {
            int distance = Point::manhattanDistance(pointi, pointj);
            if(distance >= setCost.distance) {
                setCost = cost(distance, pointi, pointj);
            }
        }
    }
    return setCost;
}

std::list<std::list<Point>> Partition::generateRandomSolution() {
    std::list<std::list<Point>> randOutput;
    randOutput.resize(numSets);

    while(isEmptyOutput(randOutput)) {
        for(const Point& point : input) {
            int set = randomInt(0, numSets - 1);
            auto it = randOutput.begin();
            std::advance(it, set);
            it->emplace_back(point);
        }
    }

    return randOutput;
}

std::list<Point> Partition::getInput() {
    return input;
}
std::list<std::list<Point>> Partition::getCurrentSolution() {
    return currentSolution;
}
std::list<std::list<Point>> Partition::getBestSolution() {
    return bestSolution;
}

void Partition::createInputFile(const std::string &filename) {
    std::ofstream fout(filename);
    fout << input.size() << std::endl;
    fout << numSets;
    for(const Point& point : input) {
        fout << std::endl << point;
    }
}

void Partition::createSolutionFile(const std::string &filename) {

}

//private functions
bool Partition::isEmptyOutput(const std::list<std::list<Point>> &testOutput) {
    return std::any_of(testOutput.begin(), testOutput.end(), [](const std::list<Point>& set) { return set.empty(); });
}

std::list<std::list<Point>> Partition::modifySolutionRandomly() {
    std::list<std::list<Point>> testSolution = currentSolution;
    int set1, set2, point1, point2;

    do {
        set1 = randomInt(0, numSets - 1);
        set2 = randomInt(0, numSets - 1);
    }while(set1 == set2);
    auto setIt1 = testSolution.begin();
    auto setIt2 = testSolution.begin();
    std::advance(setIt1, set1);
    std::advance(setIt2, set2);

    point1 = randomInt(0, setIt1->size() - 1);
    point2 = randomInt(0, setIt2->size() - 1);
    auto pointIt1 = setIt1->begin();
    auto pointIt2 = setIt2->begin();
    std::advance(pointIt1, point1);
    std::advance(pointIt2, point2);

    if(randomInt(0, 1) == 0) {
        setIt1->emplace_back(*pointIt2);
        setIt2->remove(*pointIt2);
    } else {
        setIt1->emplace_back(*pointIt2);
        setIt2->emplace_back(*pointIt1);
        setIt1->remove(*pointIt1);
        setIt2->remove(*pointIt2);
    }

    return testSolution;
}

void Partition::simulate(int steps, int restarts) {

    currentSolution = generateRandomSolution();
    bestSolution = currentSolution;

    cost currentCost = getSolutionCost(currentSolution);
    cost bestCost = currentCost;

    std::list<std::list<Point>> modifiedSolution;

    for(int i = 0; i < steps; i++) {
        if(i % (steps/restarts) == 0) {
            currentSolution = bestSolution;
            currentCost = bestCost;
            //std::cout << std::endl << std::endl;
        }

        double temperature = (static_cast<double>(i)+1)/steps;
        modifiedSolution = modifySolutionLowestCost();
        cost modifiedCost = getSolutionCost(modifiedSolution);

        if (modifiedCost.distance < currentCost.distance) {
            currentSolution = modifiedSolution;
            currentCost = modifiedCost;
            if(currentCost.distance < bestCost.distance) {
                std::cout << currentCost.distance << " ";
                bestSolution = currentSolution;
                bestCost = currentCost;
            }
        }
        else if(std::exp(-(static_cast<double>(modifiedCost.distance)/currentCost.distance - 1) / temperature) < randomDouble(0,1)) {
            currentSolution = modifiedSolution;
            currentCost = modifiedCost;
        }
    }
}

int Partition::randomInt(int min, int max) const {
    static std::mt19937 generator(seed);
    std::uniform_int_distribution<int> dist(min, max);
    return dist(generator);
}
double Partition::randomDouble(double max, double min) const {
    static std::mt19937 generator(seed);
    std::uniform_real_distribution<double> dist(min,max);
    return dist(generator);
}

std::list<std::list<Point>> Partition::modifySolutionLowestCost() {
    std::list<std::list<Point>> testSolution = currentSolution;
    int set1, set2, point1, point2;

    do {
        set1 = randomInt(0, numSets - 1);
        set2 = randomInt(0, numSets - 1);
    }while(set1 == set2);
    auto setIt1 = testSolution.begin();
    auto setIt2 = testSolution.begin();
    std::advance(setIt1, set1);
    std::advance(setIt2, set2);

    cost set1Cost = getSetCost(*setIt1);
    cost set2Cost = getSetCost(*setIt2);

    if(randomInt(0,1) == 0) {
        if(setIt1->size() > 1) {
            setIt2->emplace_back(set1Cost.i);
            setIt1->remove(set1Cost.i);
        } else if(setIt2->size() > 1) {
            setIt1->emplace_back(set2Cost.i);
            setIt2->remove(set2Cost.i);
        }
    } else {
        setIt1->emplace_back(set2Cost.i);
        setIt2->emplace_back(set1Cost.i);
        setIt1->remove(set1Cost.i);
        setIt2->remove(set2Cost.i);
    }

    return testSolution;
}

