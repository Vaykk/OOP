#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
    Rectangle rect(5, 7);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    rect.setFirst(10);
    rect.setSecond(15);
    cout << "New area: " << rect.area() << endl;
    cout << "Multiplication: " << rect.multiply() << endl;
    return 0;
}