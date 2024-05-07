#pragma once
#include <iostream>
#include "point.h"

class point3D : public point
{
public:
    int z{ 0 };

    point3D();
    point3D(int x, int y, int z);
    point3D(const point3D& other);

    point3D& operator=(const point3D& other);
    point3D operator+(const point3D& other);
    bool operator<(const point3D& other);

    friend std::ostream& operator<<(std::ostream& out, const point3D& pnt);
};

