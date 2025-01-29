#include "Triangle.h"
#include <cmath>

Triangle::Triangle(short sideA, short sideB, short sideC) : a(sideA), b(sideB), c(sideC)
{
    if (a + b < c || b + c < a || a + c < b || a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "Invalid triangle dimensions! Triangle cannot be created." << std::endl;
        delete this;
    }
}

double Triangle::square()
{
    int p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

BoundingBoxDimensions Triangle::dimensions()
{
    BoundingBoxDimensions sq;
    if (!square())
        return sq;

    sq.height = 2 * (a * b * c / (4 * square()));
    sq.weight = sq.height;

    return sq;
}

std::string Triangle::type()
{
    return name;
}