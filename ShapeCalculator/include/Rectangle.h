#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : virtual public Shape
{
    const std::string name = "Rectangle";
    const short a;
    const short b;

public:
    Rectangle(short sideA, short sideB);
    double square() override;
    BoundingBoxDimensions dimensions() override;
    std::string type() override;
};

#endif // RECTANGLE_H