#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : virtual public Shape
{
    const std::string name = "Circle";
    const short r;

public:
    Circle(short radius);
    double square() override;
    BoundingBoxDimensions dimensions() override;
    std::string type() override;
};

#endif // CIRCLE_H