#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : virtual public Shape
{
    const std::string name = "Triangle";
    const short a;
    const short b;
    const short c;

public:
    Triangle(short sideA, short sideB, short sideC);
    double square() override;
    BoundingBoxDimensions dimensions() override;
    std::string type() override;
};

#endif // TRIANGLE_H