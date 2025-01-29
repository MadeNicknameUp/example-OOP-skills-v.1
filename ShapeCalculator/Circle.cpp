#include "Circle.h"

Circle::Circle(short radius) : r(radius)
{
    if (r <= 0)
    {
        std::cout << "Invalid circle radius! Circle cannot be created." << std::endl;
        delete this;
    }
}

double Circle::square()
{
    return 3.1415 * r * r;
}

BoundingBoxDimensions Circle::dimensions()
{
    BoundingBoxDimensions sq;
    if (!square())
        return sq;

    sq.height = 2 * r;
    sq.weight = sq.height;

    return sq;
}

std::string Circle::type()
{
    return name;
}