#pragma once
#include <string>
#include <ostream>
class Person
{
public:
	Person(std::string n, int a) :name(n), age(a) {};
	~Person() {};
	friend std::ostream& operator<<(std::ostream &os, const Person p) {
		os << p.name << " " << p.age;
		return os;
	}

	std::string getName() { return this->name; }
	int getAge() { return this->age; };

private:
	std::string name;
	int age;
};

