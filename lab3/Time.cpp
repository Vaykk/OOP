#include "Time.h"
Time Time::operator -(Time& obj)
{
	Time temp;
	temp.min = this->min - obj.min;
	temp.sec = this->sec - obj.sec;
	if (temp.sec < 0)
	{
		temp.sec = 60 - abs(temp.sec);
		--temp.min;
	}
	return temp;
}
Time::Time()
{
	this->min = 0;
	this->sec = 0;
}
Time::Time(int min, int sec)
{
	this->min = min;
	this->sec = sec;
}
Time::Time(const Time& obj)
{
	this->min = 0;
	this->sec = 0;
}
Time::~Time()
{
	cout << "Destuctor" << endl << endl;
}
int Time::get_min()
{
	return this->min;
}
void Time::set_min(int min)
{
	this->min = min;
}

int Time::get_sec()
{
	return this->sec;
}
void Time::set_sec(int sec)
{
	this->sec = sec;
}
void Time::show()
{
	cout << this->min << " : " << this->sec << endl;
}