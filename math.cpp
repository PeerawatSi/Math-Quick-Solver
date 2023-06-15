#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "math.h"
using namespace std;

MathSolver::MathSolver()
{
    srand(time(0));
    num1 = rand()%100;
    num2 = rand()%100;
}

MathSolver::~MathSolver()
{
    delete &num1;
    delete &num2;
}


int MathSolver::sum()
{
    return num1 + num2;
}

int MathSolver::subtract()
{
    return num1 - num2;
}

int MathSolver::multi()
{
    return num1 * num2;
}

int MathSolver::divide()
{
    return num1 / num2;
}

