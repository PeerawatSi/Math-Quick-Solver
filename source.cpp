#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>
#include "math.h"
#include "math.cpp"
using namespace std;

void title(string text);


int main()
{

    title("Math-Quick-Solver!!!");
    
    while (true)
    {
        MathSolver a;
        a.ask();
    }
    
    

    return 0;
}

void title(string text)
{
    cout << "----------------------------------------------------------\n";
    cout << text << endl;
    cout << "----------------------------------------------------------\n";
}