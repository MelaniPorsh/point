#include "point.h"

point::point() : x(0), y(0) {}

point::point(int x, int y) : x(x), y(y) {}

point::point(const point& other) : x(other.x), y(other.y) {}

point& point::operator=(const point& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

point point::operator+(const point& other) {
    return point(x + other.x, y + other.y);
}

bool point::operator<(const point& other) {
    return (x < other.x) or (x == other.x && y < other.y);
}

std::ostream& operator<<(std::ostream& out, const point& pnt) {
    out << "(" << pnt.x << ", " << pnt.y << ")";
    return out;
}
