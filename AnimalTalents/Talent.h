#ifndef TALENT_H
#define TALENT_H

#include <string>

// Abstract class Talent
class Talent {
public:
    // Virtual method to display the talent
    virtual void nameIt(std::string petName) const = 0;

    // Virtual method to get the name of the talent
    virtual std::string getName() const = 0;

    // Virtual destructor
    virtual ~Talent() {}
};

#endif // TALENT_H