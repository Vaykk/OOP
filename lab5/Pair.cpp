#include "Pair.h"
Pair::Pair()
{
    this->first = 0;
    this->second = 0;
}
Pair::Pair(int f, int s)
{
    this->first = f;
    this->second = s;
}
void Pair::setFirst(int f) {
    this->first = f;
}
void  Pair::setSecond(int s) {
    this->second = s;
}