#include "Calculator.h"
#include <stdexcept>
#include <sstream>

double Calculator::Calculate(double firstValue, char oper, double secondValue)
{
    switch (oper)
    {
    case '+':
        return firstValue + secondValue;
    case '-':
        return firstValue - secondValue;
    case '*':
        return firstValue * secondValue;
    case '/':
        if (oper == '/' && secondValue == 0)
            throw std::invalid_argument("Cannot divide by 0");

        return firstValue / secondValue;
    default:
        std::stringstream ss;
        ss << "value '" << oper << "' is not a valid operator";
        std::string exceptionMessage= ss.str();

        throw std::invalid_argument(exceptionMessage);
    }
}