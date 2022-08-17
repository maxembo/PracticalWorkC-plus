#include <iostream>
#include "Helpers.h"

using namespace std;

void main()
{
    double result1 = SumSquared(5, 7);

    double result2 = SumSquared(7.1, 4.2);

    double result3 = SumSquared(6.5, 8.2);

    cout << "Result1:  " << result1 << "\nResult2:  " << result2 << "\nResult3:  " << result3;
}

