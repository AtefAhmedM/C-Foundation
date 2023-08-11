// ChildImp.cpp

#include "Child.h"

ifstream inFile("Child.txt", ios::in);

void Kindergarten::set(string kName, int nChildren)
{
	name = kName;
	numberOfChildren = nChildren;

	for(int i=0; i<numberOfChildren; i++)
    {
		getline(inFile, kids[i].name, ',');
		inFile >> kids[i].age >> kids[i].toysCost;
    }

	calculateCost();
}

void Kindergarten::get(string &kName, int &nChildren) const
{
	kName = name;
	nChildren = numberOfChildren;
}

float Kindergarten::getCost()const
{
    return cost;
}

void Kindergarten::calculateCost()
{
    float sum=0;

	for(int i=0; i<numberOfChildren; i++)
	    sum += kids[i].toysCost;

    cost = sum;
}

void Kindergarten::print() const
{
	cout << name << " Kindergarten has " << numberOfChildren
         << " children with toys worth " << cost << " dirham" << endl;
}

Kindergarten::Kindergarten(string kName, int nChildren)
{
	name = kName;
	numberOfChildren = nChildren;

	for(int i=0; i<numberOfChildren; i++)
    {
        kids[i].name = "";
        kids[i].age = 0;
        kids[i].toysCost = 0;
    }

	calculateCost();
}

