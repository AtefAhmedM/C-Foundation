// college.cpp

#include "college.h"

int main()
{
	string	collegeName;
	double deptDensity;
	int numberDepartments, numberFaculty;

	College Health("Health Sciences", 4, 21);
	cout << College::getCount() << "   " << College::getTotalNumberOfFaculty() << endl;
	Health.print();
	deptDensity = Health.departmentDensity();
	cout << "Department density in " << Health.getName() << " is " << deptDensity
		 << " faculty per department.\n\n";

	{
		College Arts("Arts", 8, 63);
		cout << College::getCount() << "   " << College::getTotalNumberOfFaculty() << endl;
		Arts.print();
		deptDensity = Arts.departmentDensity();
		cout << "Department density in " << Health.getName() << " is " << deptDensity
			 << " faculty per department.\n\n";
	}

	College Engineering;
	cout << "Enter number of Engineering departments, faculty ";
	cin >> numberDepartments >> numberFaculty;
	Engineering.set("Engineering", numberDepartments, numberFaculty);
	cout << College::getCount() << "   " << College::getTotalNumberOfFaculty() << endl;

	cout << endl;

	Engineering.print();
	deptDensity = Engineering.departmentDensity();
	cout << "Department density in " << Engineering.getName() << " is " << deptDensity
		 << " faculty per department.\n\n";

	cout << "Average faculty is " << College::avgFaculty()
		 << " faculty per department.\n\n";

	return 0;
}
