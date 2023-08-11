// Student.cpp

#include "Student.h"

int main()
{
	string	sId, sCollege;
	int nCredits;

	Student first, second("22222", "Art", 17);

	first.print();
	second.print();

	cout << "Enter the id, college, and number of credits of the first student\n";
	cin >> sId >> sCollege >> nCredits;
	first.set(sId, sCollege, nCredits);

	first.print();

	cout << "Number of students is: " << Student::getCount()
		 << " and total cost is: " << Student::getTotalCost() << endl;

	{
		// Assume that the third student drooped the course.
		Student third("33333", "Law", 16);
		third.print();
	}

	cout << "Number of students is: " << first.getCount()
		 << " and total cost is: " << first.getTotalCost() << endl;

    return 0;
}
