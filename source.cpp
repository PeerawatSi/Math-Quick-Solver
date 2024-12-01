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
    int round = 0;

    title("Math-Quick-Solver!!!");
    cout << "How many question will you solve? : ";
    cin >> round;
    MathSolver a;


    for(int i = 0; i < round; i++)
    {
        
        cout << "Q" << i+1 << " ";
        score += a.ask();
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