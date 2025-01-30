# AnimalTalents

## Overview
`AnimalTalents` is a C++ project that demonstrates object-oriented programming (OOP) concepts through a system where animals possess various talents. The project includes an `Animal` base class and multiple derived classes representing different abilities.

## Features
- **Base Class**: `Animal`
- **Derived Classes**:
  - `Dog` (inherits from `Animal`)
  - Various talents such as `Swimming`, `Dancing`, and `Counting` implemented as separate components.

## Project Structure
```
AnimalTalents/
├── include/
│   ├── Animal.h
│   ├── Counting.h
│   ├── Dancing.h
│   ├── Dog.h
│   ├── Swimming.h
│   ├── Talent.h
├── src/
│   ├── Dog.cpp
│   ├── main.cpp
└── README.md
```

## Compilation & Execution
1. Navigate to the `AnimalTalents` directory:
   ```sh
   cd AnimalTalents
   ```
2. Compile using g++:
   ```sh
   g++ -o main src/*.cpp -Iinclude
   ```
3. Run the executable:
   ```sh
   ./main
   ```

## Requirements
- C++ compiler (GCC, Clang, or MSVC)
- CMake (optional for easier builds)

## License
This project is licensed under the MIT License. See `LICENSE` for details.


