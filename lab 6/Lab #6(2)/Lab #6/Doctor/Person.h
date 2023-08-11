//   Person.h

#include <iostream>

using namespace std;

class Person
{
public:
	void set(string, int);
	int getMoney() const;
	void print() const;
	Person(string = "", int = 0);

private:
	string name;
	int money;
};
