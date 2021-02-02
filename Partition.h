//
// Created by jonat on 01/12/21.
//

#ifndef SIMULATEDANNEALING_PARTITION_H
#define SIMULATEDANNEALING_PARTITION_H
#include <list>
#include <string>
#include <fstream>
#include <random>
#include <ctime>
#include <algorithm>

#include "Point.h"

class Partition {
    struct cost {
        int distance;
        Point i, j;

        cost() : distance(0) {}
        cost(int distance, Point i, Point j) : distance(distance), i(i), j(j) {}
    };

    int numSets{}, maxDist{};
    int seed;
    std::list<Point> input;
    std::list<std::list<Point>> currentSolution;
    std::list<std::list<Point>> bestSolution;

    static bool isEmptyOutput(const std::list<std::list<Point>>& testOutput);

public:
    Partition();
    Partition(const std::string& filename);
    Partition(int seed, int numPoints, int numSets);

    void simulate(int steps, int restarts);
    std::list<std::list<Point>> modifySolutionRandomly();
    std::list<std::list<Point>> modifySolutionLowestCost();
    std::list<std::list<Point>> generateRandomSolution();


    void setInput(const std::string& filename);
    void generateInput(int size);

    static cost getSolutionCost(const std::list<std::list<Point>>& solution);
    static cost getSetCost(std::list<Point> set);

    std::list<Point> getInput();
    std::list<std::list<Point>> getCurrentSolution();
    std::list<std::list<Point>> getBestSolution();

    void createInputFile(const std::string& filename);
    void createSolutionFile(const std::string& filename);

    int randomInt(int min, int max) const;
    double randomDouble(double max, double min) const;
};


#endif //SIMULATEDANNEALING_PARTITION_H
