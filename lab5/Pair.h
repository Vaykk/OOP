#pragma once
class Pair {
protected:
    int first;
    int second;
public:
    Pair();
    Pair(int, int);
    void setFirst(int);
    void setSecond(int);
    virtual int multiply() {
        return first * second;
    }
};