#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
    double firstValue = 0.0;
    double secondValue = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application\n\n";
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b\n";

    Calculator calculator;

    try {
        cin >> firstValue >> oper >> secondValue;

        result = calculator.Calculate(firstValue, oper, secondValue);
        cout << "Result is: " << result;

        return 0;
    }
    catch (const exception& ex) {
        cerr << ex.what();
        return 1;
    }
}