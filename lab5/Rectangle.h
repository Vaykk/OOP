#pragma once
#include "Pair.h"
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
    void setWidth(int);
    void setHeight(int);
    virtual int getArea() {
        return width * height;
    }
    virtual int getPerimeter() {
        return 2 * (width + height);
    }
};