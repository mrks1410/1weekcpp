#include "data.h"

void CData::init()
{
    number = 0;
    comment = "";
}

void CData::setNumber(int number)
{
    this->number = number;
}

void CData::setComment(string comment)
{
    this->comment = comment;
}

int CData::getNumber()
{
    return number;
}

string CData::getComment()
{
    return comment;
}