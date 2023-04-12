#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
    Pair p(3, 5);
    cout << "Pair multiplication: " << p.multiply() << endl;

    Rectangle r(4, 6);
    cout << "Rectangle area: " << r.getArea() << endl;
    cout << "Rectangle perimeter: " << r.getPerimeter() << endl;

    Pair* ptr = &r;
    cout << "Pair multiplication using Rectangle ptr: " << ptr->multiply() << endl;

    Rectangle r2(2, 8);
    ptr = &r2;
    cout << "Rectangle area using Pair ptr: " << ptr->getArea() << endl;

    return 0;
}