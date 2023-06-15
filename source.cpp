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
    int score = 0;
    int round = 1;

    title("Math-Quick-Solver!!!");
    
    while (round <= 100)
    {
        MathSolver a;
        cout << "Q" << round << " ";
        score += a.ask();
        round++;
        cout << "Score "<< score << " maxed out of " << round << endl;
    }
    
    

    return 0;
}

void title(string text)
{
    cout << "----------------------------------------------------------\n";
    cout << text << endl;
    cout << "----------------------------------------------------------\n";
}