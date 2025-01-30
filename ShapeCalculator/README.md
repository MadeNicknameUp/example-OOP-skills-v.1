# Shape Calculator

This project is a simple C++ application that calculates the area and bounding box dimensions for various geometric shapes, including rectangles, triangles, and circles. It demonstrates the use of object-oriented programming principles, such as inheritance and polymorphism.

## Features

- **Shape Types**: Supports rectangles, triangles, and circles.
- **Calculations**:
  - **Area**: Calculates the area of each shape.
  - **Bounding Box**: Provides the dimensions of the bounding box for each shape.
- **Output**: Prints the type of shape, its area, and bounding box dimensions.

## Classes

- **Shape**: Abstract base class with virtual methods for calculating area, bounding box dimensions, and returning the shape type.
- **Rectangle**: Represents a rectangle with two sides.
- **Triangle**: Represents a triangle with three sides.
- **Circle**: Represents a circle with a radius.
## Project Structure

**The project is organized as follows**:

```
ShapeCalculator/
├── include/
│   ├── Shape.h
│   ├── Rectangle.h
│   ├── Triangle.h
│   └── Circle.h
├── src/
│   ├── Rectangle.cpp
│   ├── Triangle.cpp
│   ├── Circle.cpp
│   └── main.cpp
└── README.md
```

## How to Use

1. Clone the repository:
   
   ```bash
   git clone https://github.com/MadeNicknameUp/example-OOP-skills-v.1/ShapeCalculator.git
   ```
   ```
   cd ShapeCalculator
   ```

2. Compile the project:

   ```
   g++ main.cpp Rectangle.cpp Triangle.cpp Circle.cpp -o ShapeCalculator
   ```
3. Run the executable:

   ```
   ./ShapeCalculator
   ```

## Example Output

```
Type: Triangle
Square: 150
Weight: 25
Height: 25
```
