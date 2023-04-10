#include "Fraction.h"
int main()
{
    int x, y;
    Money a;
    cout << "Enter the denomination of the bill. Can be 1,2,5,10,50,100,500,1000,5000" << endl;
    cin >> x;
    cout << "Enter the number of bills" << endl;
    cin >> y;
    a.set_first(x);
    a.set_second(y);
    a.get_summ();
    return(0);
}