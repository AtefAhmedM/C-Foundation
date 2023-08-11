//   Patient.h

#include <iostream>

using namespace std;

class Patient
{
public:
	void set(string, int, int);
	int getCost() const;
	int getDuration() const;
	void print() const;
	Patient(string = "", int = 0, int = 0);

private:
	string name;
	int durationOfTreatment, TreatmentCost;
};
