#include "Fraction.h"
void Money::set_first(int first)
{
    this->first = first;
    if (first != 1 and first != 2 and first != 5 and first != 10 and first != 50 and first != 100 and first != 1000 and first != 5000)
    {
        cout << "Error!" << endl;
        this->f = 0;
    }
}

void Money::set_second(int second)
{
    this->second = second;
}

void Money::get_summ()
{
    if (this->f != 0)
        cout << "Sum = " << this->first * this->second;
}