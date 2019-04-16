#include "calculation.h"

void Calculation::setNumber1(int number)
{
    this->number1 = number;
}

int Calculation::getNumber1()
{
    return this->number1;
}

void Calculation::setNumber2(int number)
{
    this->number2 = number;
}

int Calculation::getNumber2()
{
    return this->number2;
}

int Calculation::add()
{
    return this->number1 + this->number2;
}

int Calculation::sub()
{
    return this->number1 - this->number2;
}