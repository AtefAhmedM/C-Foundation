// collegeImp.cpp

#include "college.h"

int College::count = 0;
int College::totalNumberOfFaculty = 0;

void College::set(string collegeName, int collegeDepartments, int collegeFaculty)
{
	totalNumberOfFaculty -= numberOfFaculty;
	name = collegeName;
	numberOfDepartments = collegeDepartments;
	numberOfFaculty = collegeFaculty;
	totalNumberOfFaculty += numberOfFaculty;
}

void College::get(int& collegeDepartments, int& collegeFaculty) const
{
	collegeDepartments = numberOfDepartments;
	collegeFaculty = numberOfFaculty;
}

string College::getName() const
{
	return name;
}

int College::getCount()
{
	return count;
}

int College::getTotalNumberOfFaculty()
{
	return totalNumberOfFaculty;
}

double College::avgFaculty()
{
	return static_cast<double>(totalNumberOfFaculty) / count;
}

double College::departmentDensity() const
{
	return static_cast<double>(numberOfFaculty) / numberOfDepartments;
}

void College::print() const
{
	int collegeDepartments, collegeFaculty;
	string collegeName;

	collegeName = getName();
	get(collegeDepartments, collegeFaculty);
	cout << collegeName << " has " << collegeDepartments << " departments"
		 << ", and " << collegeFaculty << " faculties." << endl;
}

College::College(string collegeName, int collegeDepartments, int collegeFaculty)
{
	name = collegeName;
	numberOfDepartments = collegeDepartments;
	numberOfFaculty = collegeFaculty;
	count++;
	totalNumberOfFaculty += numberOfFaculty;
}

College::~College()
{
	count--;
	totalNumberOfFaculty -= numberOfFaculty;
	cout << "count is " << count << " and total number of faculty is: " << totalNumberOfFaculty << endl << endl;
}
