#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <iostream>

struct BoundingBoxDimensions
{
    int weight = 0;
    int height = 0;
};

class Shape
{
public:
    virtual double square() = 0; // Calculate the area of the shape
    virtual BoundingBoxDimensions dimensions() = 0; // Get the bounding box dimensions
    virtual std::string type() = 0; // Get the type of the shape

    void printParams()
    {
        std::cout << "Type: " << this->type() << std::endl;
        std::cout << "Square: " << this->square() << std::endl;
        std::cout << "Weight: " << this->dimensions().weight << std::endl;
        std::cout << "Height: " << this->dimensions().height << std::endl;
    }
};

#endif // SHAPE_H