#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData
{
private:
    int number;
    string comment;
public:
    void init();
    void setNumber(int number);
    int getNumber();
    void setComment(string comment);
    string getComment();
};

#endif // _CDATA_H_