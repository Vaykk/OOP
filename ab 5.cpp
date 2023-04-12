#include <iostream>
using namespace std;

class Pair {
protected:
    int first;
    int second;
public:
    Pair() {
        first = 0;
        second = 0;
    }
    Pair(int f, int s) {
        first = f;
        second = s;
    }
    void setFirst(int f) {
        first = f;
    }
    void setSecond(int s) {
        second = s;
    }
    virtual int multiply() {
        return first * second;
    }
};

class Rectangle : public Pair {
private:
    int width;
    int height;
public:
    Rectangle() : Pair() {
        width = 0;
        height = 0;
    }
    Rectangle(int w, int h) : Pair(w, h) {
        width = w;
        height = h;
    }
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    virtual int getArea() {
        return width * height;
    }
    virtual int getPerimeter() {
        return 2 * (width + height);
    }
};

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