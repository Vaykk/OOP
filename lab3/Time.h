#pragma once
#include <iostream>
using namespace std;
class Time
{
	int min, sec;
public:
	Time();
	Time(int, int);
	Time(const Time& obj);
	~Time();
	int get_min();
	int get_sec();
	void set_min(int);
	void set_sec(int);
	void show();
	Time operator -(Time& obj);
};