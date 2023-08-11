//   Doctor.h

#include "Person.h"
#include "Patient.h"

const int maxSize = 10;

class Doctor: public Person
{
public:
	void set(string, int, int);
	void print() const;
	Doctor(string = "", int = 0, int = 0);

private:
	int numberOfPatients, totalCost;
	Patient list[maxSize];
	void calculateTotalCost();
};
