#include "Pair.h"
void Pair::setFirst(int a)
{
    this->first = a;
}
void Pair::setSecond(int b)
{
    this->second = b;
}
int Pair::getFirst()
{
    return this->first;
}
int Pair::getSecond()
{
    return this->second;
}
int Pair::multiply()
{
    return this->first * this->second;
}