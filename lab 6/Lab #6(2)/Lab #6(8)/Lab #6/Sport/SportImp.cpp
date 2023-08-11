//   SportImp.cpp

#include "sport.h"

void Sport::set(string sName, int sDuration, int sCost)
{
	name = sName;
	duration = sDuration;
	cost = sCost;
}

void Sport::get(string& sName, int& sDuration, int& sCost) const
{
	sName = name;
	sDuration = duration;
	sCost = cost;
}

void Sport::print() const
{
	cout << "The sport name is: " << name << "\nit is played for: "
		 << duration << " minutes\nit cost: " << cost << "Dh." << endl;
}

Sport::Sport(string sName, int sDuration, int sCost)
{
	set(sName, sDuration, sCost);
}
