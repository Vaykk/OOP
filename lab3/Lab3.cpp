#include "Time.h"
void main()
{
	setlocale(LC_ALL, "ru");
	Time a(2, 22);
	Time b(1, 30);
	Time c=a-b;
	c.show();
}