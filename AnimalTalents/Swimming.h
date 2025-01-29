#ifndef SWIMMING_H
#define SWIMMING_H

#include "Talent.h"
#include <string>

// Class Swimming, implements the Talent interface
class Swimming : virtual public Talent {
    std::string name = "Swimming"; // Name of the talent

public:
    std::string getName() const override {
        return name;
    }

    void nameIt(std::string petName) const override {
        std::cout << petName << " can 'Swim'!" << std::endl;
    }
};

#endif // SWIMMING_H