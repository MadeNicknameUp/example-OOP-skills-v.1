#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <vector>
#include <memory>
#include "Talent.h"

// Abstract class Animal
class Animal {
protected:
    std::string name; // Name of the animal
    std::vector<std::shared_ptr<Talent>> talents; // List of talents

public:
    // Virtual method to display all talents
    virtual void showTalents() const = 0;

    // Virtual method to add a talent
    virtual void addTalent(const std::shared_ptr<Talent>& talent) = 0;

    // Virtual method to get the name of the animal
    virtual std::string getName() const = 0;
};

#endif // ANIMAL_H