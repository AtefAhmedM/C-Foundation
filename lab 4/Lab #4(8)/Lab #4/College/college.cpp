// College.cpp

#include "College.h"

int main()
{
	string	collegeName;
	double deptDensity;
	int numberDepartments, numberFaculty;

	College Health("Health Sciences", 4, 21);
	cout << College::getCount() << "   " << College::getTotalNumberOfFaculty() << endl;
	Health.print();
	deptDensity = Health.collegeDensity();
	cout << "Department density in " << Health.getName() << " is " << deptDensity
		 << " faculty per department." << endl << endl;

	{
		College Arts("Arts", 8, 63);
		cout << College::getCount() << "   " << College::getTotalNumberOfFaculty() << endl;
		Arts.print();
		deptDensity = Arts.collegeDensity();
		cout << "Department density in " << Health.getName() << " is " << deptDensity
			 << " faculty per department." << endl << endl;
	}

	College Engineering;
	cout << "Enter naumber of Engineering departments, faculty ";
	cin >> numberDepartments >> numberFaculty;
	Engineering.set("Engineering", numberDepartments, numberFaculty);
	cout << College::getCount() << "   " << College::getTotalNumberOfFaculty() << endl;

	cout << endl;

	Engineering.print();
	deptDensity = Engineering.collegeDensity();
	cout << "Department density in " << Engineering.getName() << " is " << deptDensity
		 << " faculty per department." << endl << endl;

	cout << "Average faculty is " << College::averageFaculty()
		 << " faculty per department." << endl << endl;

	return 0;
}
