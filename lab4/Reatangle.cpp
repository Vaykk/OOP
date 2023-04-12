#include "Rectangle.h"
int Rectangle::area()
{
    return this->first * this->second;
}
int Rectangle::perimeter()
{
    return 2 * (this->first + this->second);
}
