#ifndef COUNTING_H
#define COUNTING_H

#include "Talent.h"
#include <string>

// Class Counting, implements the Talent interface
class Counting : virtual public Talent {
    std::string name = "Counting"; // Name of the talent

public:
    std::string getName() const override {
        return name;
    }

    void nameIt(std::string petName) const override {
        std::cout << petName << " can 'Count'!" << std::endl;
    }
};

#endif // COUNTING_H