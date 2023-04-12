#pragma once
#include "Pair.h"
class Rectangle : public Pair {
public:
    Rectangle(int a, int b) : Pair(a, b) {}
    int area();
    int perimeter();
};