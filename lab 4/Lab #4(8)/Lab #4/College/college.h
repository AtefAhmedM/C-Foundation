// College.h

#include <iostream>

using namespace std;

class College
{
public:
    void set(string, int, int);
    string getName() const;
    void get(int&, int&) const;
	double collegeDensity() const;
	void print() const;
    static int getCount();
    static int getTotalNumberOfFaculty();
	static double averageFaculty();
	College(string = "DCS", int = 5, int = 10);
	~College();

private:
	string name;
	int numberOfDepartments;
	int numberOfFaculty;
	static int count;
    static int totalNumberOfFaculty;
};
