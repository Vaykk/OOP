#include "book.h"
book::book()
{
    this->name = "";
    this->author = "";
    this->age = 0;
}
book::book(string name, string author, int age)
{
    this->name = name;
    this->author = author;
    this->age = age;
}
book::book(const book& obj)
{
    this->name = obj.name;
    this->author = obj.author;
    this->age = obj.age;
}
book::~book()
{
    cout << "Destructor" << endl << endl;
}

string book::get_name()
{
    return name;
}
void book::set_name(string name)
{
    this->name = name;
}

string book::get_author()
{
    return author;
}
void book::set_author(string author)
{
    this->author = author;
}

int book::get_age()
{
    return age;
}
void book::set_age(int age)
{
    this->age = age;
}

void book::show()
{
    cout << "Book name: " << name << endl << "Author: " << author << endl << "Age: " << age << endl << endl;
}
