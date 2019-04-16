#ifndef _CALCULATION_H_
#define _CALCULATION_H_

class Calculation
{
private:
    int number1;
    int number2;
public:
    void setNumber1(int number);
    int getNumber1();
    void setNumber2(int number);
    int getNumber2();
    int add();
    int sub();
};

#endif // _CALCULATION_H_