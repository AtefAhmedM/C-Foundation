// StudentImp.cpp

#include "Student.h"

int Student::count = 0;
int Student::totalCost = 0;

void Student::set(string sId, string sCollege, int nCredits)
{
	totalCost -= cost;
	id = sId;
	college = sCollege;
	numberOfCredits = nCredits;
	calculateCost();
	totalCost += cost;
}

void Student::get(string &sId, string &sCollege, int &nCredits, int &sCost) const
{
	sId = id;
	sCollege = college;
	nCredits = numberOfCredits;
	sCost = cost;
}

void Student::print() const
{
	cout << "The cost of student " << id << " is " << cost << endl;
}

void Student::calculateCost()
{
	int creditCost;

	if(college == "Art")
		creditCost = 995;
	else if(college == "Law")
		creditCost = 1245;
	else if(college == "Communication")
		creditCost = 1245;
	else if(college == "Business")
		creditCost = 1245;
	else if(college == "Sciences")
		creditCost = 1105;
	else if(college == "Engineering")
		creditCost = 1245;
	else if(college == "Medicine")
		creditCost = 1750;
	else
		cout << "Wrong college!" << endl;

	cost = numberOfCredits * creditCost;
}

int Student::getCount()
{
	return count;
}

int Student::getTotalCost()
{
	return totalCost;
}

Student::Student(string sId, string sCollege, int nCredits)
{
	id = sId;
	college = sCollege;
	numberOfCredits = nCredits;
	calculateCost();
	totalCost += cost;
	count++;
}

Student::~Student()
{
	count--;
	totalCost -= cost;
	cout << "Total number of students is: " << count << " and total cost is: " << totalCost << endl << endl;
}
