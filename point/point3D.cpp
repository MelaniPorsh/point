#include "point3D.h"

point3D::point3D() : point(), z(0) {}
point3D::point3D(int x, int y, int z) : point(x, y), z(z) {}
point3D::point3D(const point3D& other) : point(other), z(other.z) {}

point3D& point3D::operator=(const point3D& other) {
    if (this != &other) {
        point::operator=(other);
        z = other.z;
    }
    return *this;
}

point3D point3D::operator+(const point3D& other) {
    return point3D(x + other.x, y + other.y, z + other.z);
}

bool point3D::operator<(const point3D& other) {
    return (x < other.x) || (x == other.x && y < other.y) || (x == other.x && y == other.y && z < other.z);
}

std::ostream& operator<<(std::ostream& out, const point3D& pnt) {
    out << "(" << pnt.x << ", " << pnt.y << ", " << pnt.z << ")";
    return out;
}
