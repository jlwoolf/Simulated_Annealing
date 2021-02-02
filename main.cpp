#include <iostream>
#include <cstring>
#include <cerrno>
#include "Partition.h"

int main(int argc, char* argv[]) {
    if(argc == 1) {
        std::cerr << "Usage: SimulatedAnnealing.exe 'filename.txt' 'number of steps' 'number of restarts'" << std::endl;
        std::cerr << "Use '?' and 'input size' 'input sets'  instead of filename to generate a random input" << std::endl;
        std::exit(-1);
    }

    errno = 0;
    char* p;

    Partition partition;
    long num_restarts;
    long num_steps;

    if(strcmp((char *)(argv[1]), "?") == 0) {
        long input_size = strtol(argv[2], &p, 10);
        if (errno != 0 || *p != '\0' || input_size > INT32_MAX) {
            std::cerr << "Invalid format for random input size" << std::endl;
            std::cerr << "Usage: SimulatedAnnealing.exe '?' 'input size' 'input sets' 'number of steps' 'number of restarts'" << std::endl;
            std::exit(-2);
        }

        long input_sets = strtol(argv[3], &p, 10);
        if (errno != 0 || *p != '\0' || input_size > INT32_MAX) {
            std::cerr << "Invalid format for random input size" << std::endl;
            std::cerr << "Usage: SimulatedAnnealing.exe '?' 'input size' 'input sets' 'number of steps' 'number of restarts'" << std::endl;
            std::exit(-2);
        }

        partition.generateInput(input_size, input_sets);
        partition.createInputFile("random_input.txt");

        num_steps = strtol(argv[4], &p, 10);
        if (errno != 0 || *p != '\0' || num_steps > INT32_MAX) {
            std::cerr << "Invalid format for simulation steps" << std::endl;
            std::cerr << "Usage: SimulatedAnnealing.exe '?' 'input size' 'input sets' 'number of steps' 'number of restarts'" << std::endl;
            std::exit(-3);
        }

        num_restarts = strtol(argv[5], &p, 10);
        if (errno != 0 || *p != '\0' || num_restarts > INT32_MAX) {
            std::cerr << "Invalid format for simulation restarts" << std::endl;
            std::cerr << "Usage: SimulatedAnnealing.exe '?' 'input size' 'input sets' 'number of steps' 'number of restarts'" << std::endl;
            std::exit(-4);
        }

    } else {
        num_steps = strtol(argv[2], &p, 10);
        if (errno != 0 || *p != '\0' || num_steps > INT32_MAX) {
            std::cerr << "Invalid format for simulation steps" << std::endl;
            std::cerr << "Usage: SimulatedAnnealing.exe 'filename.txt' 'number of steps' 'number of restarts'" << std::endl;
            std::exit(-3);
        }

        num_restarts = strtol(argv[3], &p, 10);
        if (errno != 0 || *p != '\0' || num_restarts > INT32_MAX) {
            std::cerr << "Invalid format for simulation restarts" << std::endl;
            std::cerr << "Usage: SimulatedAnnealing.exe 'filename.txt' 'number of steps' 'number of restarts'" << std::endl;
            std::exit(-4);
        }
    }
    partition.simulate(num_steps,num_restarts);

    std::cout << partition.getSolutionCost(partition.getBestSolution()).distance << std::endl << std::endl;
    for(const std::list<Point>& set : partition.getBestSolution()) {
        for(const Point& point : set) {
            std::cout << point << std::endl;
        }
        std::cout << std::endl;
    }
}
