#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>
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

int MathSolver::ask()
{
    int response = 0;
    int random = rand()%4 + 1;
    switch (random)
    {
        // Summation case
      case 1:
        cout << num1 << " + " << num2 << " = ? \n";
        cin >> response;
        if(response != sum())
        {
            cout << "Wrong!! \n";
            return 0;
        }else{
            cout << "Correct!! \n";
            return 1;
        }
        break;

        // Subtraction case
      case 2 :
        cout << num1 << " - " << num2 << " = ? \n";
        cin >> response;
        if(response != subtract())
        {
            cout << "Wrong!! \n";
            return 0;
        }else{
            cout << "Correct!! \n";
            return 1;
        }
        break;

        // Multiple case
      case 3:
        cout << num1 << " x " << num2 << " = ? \n";
        cin >> response;
        if(response != multi())
        {
            cout << "Wrong!! \n";
            return 0;
        }else{
            cout << "Correct!! \n";
            return 1;
        }
        break;

        // Divided
      case 4:
        cout << num1 << " / " << num2 << " = ? \n";
        cin >> response;
        if(floor(response) != floor(divide()))
        {
            cout << "Wrong!! \n";
            return 0;
        }else{
            cout << "Correct!! \n";
            return 1;
        }
        break;
        
    default:
        break;
    }
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

