#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <vector>
#include <memory>

// Class Dog, implements the Animal interface
class Dog : virtual public Animal {
public:
    // Constructor, takes the name of the dog
    Dog(std::string _name);

    // Destructor (cleans up talents)
    ~Dog();

    // Adds a talent
    void addTalent(const std::shared_ptr<Talent>& talent) override;

    // Displays all talents
    void showTalents() const override;

    // Gets the name of the dog
    std::string getName() const override;
};

#endif // DOG_H