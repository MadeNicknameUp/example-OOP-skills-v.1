#include "Rectangle.h"

Rectangle::Rectangle(short sideA, short sideB) : a(sideA), b(sideB)
{
    if (a <= 0 || b <= 0)
    {
        std::cout << "Invalid rectangle dimensions! Rectangle cannot be created." << std::endl;
        delete this;
    }
}

double Rectangle::square()
{
    return a * b;
}

BoundingBoxDimensions Rectangle::dimensions()
{
    BoundingBoxDimensions sq;
    if (!square())
        return sq;

    sq.height = a;
    sq.weight = b;

    return sq;
}

std::string Rectangle::type()
{
    return name;
}