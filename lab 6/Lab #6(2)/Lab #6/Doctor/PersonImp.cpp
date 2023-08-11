//   PersonImp.cpp

#include "Person.h"

void Person::set(string pName, int pMoney)
{
	name = pName;
	money = pMoney;
}

int Person::getMoney() const
{
    return money;
}

void Person::print() const
{
	cout << endl << name << " has " << money << " dirham";
}

Person::Person(string pName, int pMoney)
{
	set(pName, pMoney);
}
