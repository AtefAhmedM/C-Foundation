//   PersonImp.cpp

#include "Person.h"

void Person::set(string fName, string lName, int nGames)
{
	int sDuration, sCost;
	string sName;

	first = fName;
	last = lName;
	numberOfGames = nGames;

	for(int i=0; i<numberOfGames; i++)
	{
		cout << "Enter the name, duration amd cost of sport number "<< i+1 << ": ";
		cin >> sName >> sDuration >> sCost;
		list[i].set(sName, sDuration, sCost);
	}

	cout << endl;

	calculateTotalCost();
}

void Person::print() const
{
	cout << first << " " << last << " plays the following sports:" << endl;

	for(int i=0; i<numberOfGames; i++)
	{
		list[i].print();
		cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	}

	cout << "Total cost is: " << totalCost << endl;
}

void Person::calculateTotalCost()
{
	int sDuration, sCost, sum=0;
	string sName;

	for(int i=0; i<numberOfGames; i++)
	{
		list[i].get(sName, sDuration, sCost);
		sum += sDuration * sCost;
	}

	totalCost = sum;
}

Person::Person(string fName, string lName, int nGam �    <�G ���5x���J#N��� �a�"+�