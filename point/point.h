#pragma once
#include <iostream>

class point
{
public:
    int x{ 0 };
    int y{ 0 };

    point();
    point(int x, int y);
    point(const point& other);

    point& operator=(const point& other);
    point operator+(const point& other);
    bool operator<(const point& other);

    friend std::ostream& operator<<(std::ostream& out, const point& pnt);
};
