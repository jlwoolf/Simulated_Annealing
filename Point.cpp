//
// Created by jlwoolf on 01/12/21.
//

#include "Point.h"

Point::Point() : x(0), y(0), z(0), n(0) {}
Point::Point(Point const &p) : x(p.x), y(p.y), z(p.z), n(p.n) {}
Point::Point(int x, int y, int z, int n) : x(x), y(y), z(z), n(n) {}

bool Point::operator==(const Point &p) {
    return n == p.n;
}

bool Point::operator<(const Point &p) {
    return n < p.n;
}

bool Point::operator>(const Point &p) {
    return n > p.n;
}

std::ostream &operator<<(std::ostream &os, const Point &p) {
    os << p.x << " " << p.y << " " << p.z;
    return os;
}
std::fstream &operator<<(std::fstream &fs, const Point &p) {
    fs << std::to_string(p.x) << " " << std::to_string(p.y) << " " << std::to_string(p.z);
    return fs;
}

int Point::getN() const {
    return n;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

int Point::getZ() const {
    return z;
}

int Point::manhattanDistance(const Point &p1, const Point &p2) {
    return std::abs(p1.getX() - p2.getX()) + std::abs(p1.getY() - p2.getY()) + std::abs(p1.getZ() - p2.getZ());
}
