//   PatientImp.cpp

#include "Patient.h"

void Patient::set(string pName, int tDuration, int tCost)
{
	name = pName;
	durationOfTreatment = tDuration;
	TreatmentCost = tCost;
}

int Patient::getCost() const
{
    return TreatmentCost;
}

int Patient::getDuration() const
{
    return durationOfTreatment;
}

void Patient::print() const
{
	cout << "\t" << name << " was treated for "
		 << durationOfTreatment << " minutes, at a cost " << TreatmentCost << " dirham per minute" << endl;
}

Patient::Patient(string pName, int tDuration, int tCost)
{
	set(pName, tDuration, tCost);
}
