#pragma once
class Pair {
protected:
    int first;
    int second;
public:
    Pair(int a, int b) : first(a), second(b) {}
    void setFirst(int);
    void setSecond(int);
    int getFirst();
    int getSecond();
    int multiply();
};