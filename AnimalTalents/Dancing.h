#ifndef DANCING_H
#define DANCING_H

#include "Talent.h"
#include <string>

// Class Dancing, implements the Talent interface
class Dancing : virtual public Talent {
    std::string name = "Dancing"; // Name of the talent

public:
    std::string getName() const override {
        return name;
    }

    void nameIt(std::string petName) const override {
        std::cout << petName << " can 'Dance'!" << std::endl;
    }
};

#endif // DANCING_H