# example-OOP-skills-v.1

## Overview

This repository demonstrates various object-oriented programming (OOP) skills using C++. It includes multiple projects, each focusing on different OOP principles such as encapsulation, inheritance, and polymorphism.

## Projects

### 1. [Animal Talents](AnimalTalents/README.md)

A program that simulates animals with different talents using OOP concepts. It includes a base `Animal` class and derived classes representing different talents such as swimming, dancing, and counting.

### 2. [Shape Calculator](ShapeCalculator/README.md)

A simple program that performs geometric shape calculations using OOP principles. It includes classes for different shapes, implementing methods to calculate area, perimeter, etc.

## Project Structure

```
- example-OOP-skills-v.1/
├── AnimalTalents/
│   ├── include/
│   │   ├── Animal.h
│   │   ├── Counting.h
│   │   ├── Dancing.h
│   │   ├── Dog.h
│   │   ├── Swimming.h
│   │   ├── Talent.h
│   ├── src/
│   │   ├── Dog.cpp
│   │   ├── main.cpp
│   ├── README.md
│   └── LICENSE
├── ShapeCalculator/
│   ├── include/
│   │   ├── Shape.h
│   ├── src/
│   │   ├── Shape.cpp
│   │   ├── main.cpp
│   ├── README.md
│   └── LICENSE
└── README.md
```

## Installation and Usage

1. Clone the repository:
   ```sh
   git clone https://github.com/MadeNicknameUp/example-OOP-skills-v.1.git
   ```
2. Navigate to a specific project directory and compile the code using a C++ compiler:
   ```sh
   g++ -o main src/*.cpp -Iinclude
   ```
3. Run the program:
   ```sh
   ./main
   ```

## Requirements

- C++ compiler (GCC, Clang, or MSVC)
- CMake (optional, for easier builds)

## Contributing

Feel free to fork the repository and submit pull requests to improve the code or add new features.

## License

This project is licensed under the MIT License. See `LICENSE` for more details.

