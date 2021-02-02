#include <iostream>
#include "Partition.h"

int main() {
    Partition partition("input1.txt");
    partition.generateInput(100);
    partition.createInputFile("input1.txt");
    partition.simulate(10000000,20);

    std::cout << partition.getSolutionCost(partition.getBestSolution()).distance << std::endl << std::endl;
    for(const std::list<Point>& set : partition.getBestSolution()) {
        for(const Point& point : set) {
            std::cout << point << std::endl;
        }
        std::cout << std::endl;
    }
}
