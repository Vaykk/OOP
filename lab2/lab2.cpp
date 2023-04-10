#include "book.h"
book make_book()
{
	string name, author;
	int age;
	cout << "Enter name of book, author and age" << endl;
	cin >> name >> author >> age;
	book t(name, author, age);
	return t;
}
void print_book(book t)
{
	t.show();
}

void main()
{
	book a;
	a.show();
	book b("Captain`s drochka", "Pushkin", 228);
	b.show();
	book c = b;
    c.show();
	c.set_name("Volki");
	c.set_author("auf");
	c.set_age(1651);
	print_book(c);
	a = make_book();
	a.show();
}