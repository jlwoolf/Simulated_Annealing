//
// Created by jlwoolf on 01/12/21.
//

#ifndef SIMULATEDANNEALING_POINT_H
#define SIMULATEDANNEALING_POINT_H
#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <numeric>

class Point {
    int n;
    int x, y, z;

public:
    Point();
    Point(Point const &p);
    Point(int x, int y, int z, int n);

    static int manhattanDistance(const Point& p1, const Point& p2);

    bool operator== (const Point& p);
    bool operator< (const Point& p);
    bool operator> (const Point& p);

    friend std::ostream &operator<<(std::ostream &os, const Point &p );
    friend std::fstream &operator<<(std::fstream& fs, const Point& p);

    int getN() const;
    int getX() const;
    int getY() const;
    int getZ() const;
};


#endif //SIMULATEDANNEALING_POINT_H
