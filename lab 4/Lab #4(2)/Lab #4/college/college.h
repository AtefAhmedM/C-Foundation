// college.h

#include <iostream>

using namespace std;

class College
{
	public:
		void set(string, int, int);
		string getName() const;
		void get(int&, int&) const;
		static int getCount();
		static int getTotalNumberOfFaculty();
		static double avgFaculty();
		double departmentDensity() const;
		void print() const;
		College(string = "DCS", int = 5, int = 10);
		~College();

	private:
		static int count;
        static int totalNumberOfFaculty;
		string name;
		int numberOfDepartments;
		int numberOfFaculty;
};
