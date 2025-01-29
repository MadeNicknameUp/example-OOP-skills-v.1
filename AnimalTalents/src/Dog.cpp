#include "Dog.h"
#include <iostream>

// Constructor, takes the name of the dog
Dog::Dog(std::string _name) {
    name = _name;
}

// Destructor (cleans up talents)
Dog::~Dog() {
    for (const auto& talent : talents) {
        delete &talent;
    }
}

// Adds a talent
void Dog::addTalent(const std::shared_ptr<Talent>& talent) {
    talents.push_back(talent);
    std::cout << "Talent has been added!" << std::endl;
}

// Displays all talents
void Dog::showTalents() const {
    for (const auto& talent : talents) {
        talent->nameIt(name);
    }
}

// Gets the name of the dog
std::string Dog::getName() const {
    return name;
}