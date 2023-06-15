#ifndef math
#define math
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class MathSolver
{
    public:
    int num1 = 0;
    int num2 = 0;

    MathSolver(); // Constructor O(1)

    ~MathSolver(); // Destructor O(1)

    void ask(); // asking question O(1)

    int sum(); // sum function O(1)

    int subtract(); // subtract function O(1)

    int multi(); // multi function O(1)

    int divide(); // divide function O(1)

};

#endif