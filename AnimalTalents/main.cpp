#include <iostream>
#include <memory>
#include <vector>
#include "Dog.h"
#include "Swimming.h"
#include "Dancing.h"
#include "Counting.h"

// Function to find a talent by name
std::shared_ptr<Talent> findTalent(const std::string& _name) {
    // List of available talents
    std::vector<std::shared_ptr<Talent>> talents {
        std::make_shared<Counting>(),
        std::make_shared<Swimming>(),
        std::make_shared<Dancing>()
    };

    for (const auto& talent : talents) {
        if (talent->getName() == _name) {
            return talent;
        }
    }
    return nullptr; // If talent is not found
}

int main() {
    // Creating a dog object with the name "Snowball"
    Animal* snowball = new Dog("Snowball");

    std::string newTalentName;
    std::cout << "What talent do you want to give to " << snowball->getName() << " ?\n";
    std::cin >> newTalentName;

    // Loop to add talents
    while (newTalentName != "stop") {
        auto newTalent = findTalent(newTalentName);
        if (!newTalent) {
            std::cout << "There is no such talent as " << newTalentName << std::endl;
        } else {
            snowball->addTalent(newTalent);
        }

        std::cout << "What talent do you want to give to " << snowball->getName() << " ?\n";
        std::cin >> newTalentName;
    }

    // Displaying all talents
    snowball->showTalents();

    // Memory deallocation (commented out as shared_ptr is used)
    // delete snowball;

    return 0;
}