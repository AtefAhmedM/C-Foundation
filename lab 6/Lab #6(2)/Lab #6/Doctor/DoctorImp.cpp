//   DoctorImp.cpp

#include "Doctor.h"

void Doctor::set(string dName, int dMoney, int nPatients)
{
    string pName;
    int i, tDuration, tCost;

	Person::set(dName, dMoney);
	numberOfPatients = nPatients;

	for(i=0; i<numberOfPatients; i++)
    {
        cout << "Enter the name, duration, and cost of treatment number " << i+1 << ": ";
        cin >> pName >> tDuration >> tCost;
        list[i].set(pName, tDuration, tCost);
    }

    calculateTotalCost();
}

void Doctor::print() const
{
    Person::print();

	cout << " and treated the following patients:" << endl;
	for(int i=0; i<numberOfPatients; i++)
        list[i].print();

    cout << "\nThe total cost of the " << numberOfPatients << " patients is " << totalCost << " dirham" << endl;
    cout << "The overall total of money is " << getMoney() + totalCost << " dirham" << endl;
}

void Doctor::calculateTotalCost()
{
    int i, sum = 0;

    for(i=0; i<numberOfPatients; i++)
        sum = sum + list[i].getCost() * list[i].getDuration();

    totalCost = sum;
}

Doctor::Doctor(string dName, int dMoney, int nPatients)
    :Person(dName, dMoney)
{
    numberOfPatients = nPatients;
	for(int i=0; i<numberOfPatients; i++)
        list[i].set("", 0, 0);

    calculateTotalCost();
}
