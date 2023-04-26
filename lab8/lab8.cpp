#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Базовый класс
class Person {
public:
	Person(string name, int age) : name(name), age(age) {}
	virtual ~Person() {}
	virtual void printInfo() const = 0;  // чисто виртуальный метод
public:
	string name;
	int age;
};
// Производный класс
class Employee : public Person {
public:
	Employee(string name, int age, float salary, string position)
		: Person(name, age), salary(salary), position(position) {}
	void printInfo() const override {
		cout << "Employee: " << name << ", Age: " << age << ", Salary: " << salary << ", Position: " << position << endl;
	}

	float getSalary() const {
		return salary;
	}

	string getPosition() const {
		return position;
	}
private:
	float salary;
	string position;
};

// Класс-группа
class Group {
public:
	Group() {}
	~Group() {
		for (auto& p : people) {
			delete p;
		}
	}
	void addPerson(Person* p) {
		people.push_back(p);
	}

	void removePerson(int index) {
		delete people[index];
		people.erase(people.begin() + index);
	}

	void printInfo() const {
		for (const auto& p : people) {
			p->printInfo();
		}
	}

	double averageAge() const {
		double sum = 0;
		for (const auto& p : people) {
			sum += p->age;
		}
		return sum / people.size();
	}

	int size() const {
		return people.size();
	}

	Person* getPerson(int index) {
		return people[index];
	}
private:
	vector<Person*> people;
};

int main() {
	Group group;
	while (true) {
		char command;
		cout << "Enter command (+ to add, - to remove, s to show, z to show by index, q to quit): ";
		cin >> command;

		if (command == '+') {
			string name, position;
			int age;
			float salary;

			cout << "Enter name: ";
			cin >> name;

			cout << "Enter age: ";
			cin >> age;

			cout << "Enter salary: ";
			cin >> salary;

			cout << "Enter position: ";
			cin >> position;

			group.addPerson(new Employee(name, age, salary, position));
		}
		else if (command == '-') {
			int index;
			cout << "Enter index to remove: ";
			cin >> index;

			if (index >= 0 && index < group.size()) {
				group.removePerson(index);
			}
			else {
				cout << "Index is out of range!" << endl;
			}
		}
		else if (command == 's') {
			group.printInfo();
		}
		else if (command == 'z') {
			int index;
			cout << "Enter index to show: ";
			cin >> index;

			if (index >= 0 && index < group.size()) {
				group.getPerson(index)->printInfo();
			}
			else {
				cout << "Index is out of range!" << endl;
			}
		}
		else if (command == 'q') {
			break;
		}
		else {
			cout << "Unknown command!" << endl;
		}
	}

	return 0;
}


