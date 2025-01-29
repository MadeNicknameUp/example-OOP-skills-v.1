#include "Triangle.h"

int main()
{
    Triangle *tr = new Triangle(15, 20, 25);
    tr->printParams();
    delete tr;

    return 0;
}