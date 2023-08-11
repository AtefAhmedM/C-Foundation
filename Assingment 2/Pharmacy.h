#ifndef PHARMACY_H_INCLUDED
#define PHARMACY_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Medicine
{
	string name, type;
	int quantity;
	double price;
};

class Pharmacy
{
	friend ostream& operator<<(ostream& osObject, const Pharmacy& phObject);
	friend istream& operator>>(istream& isObject, Pharmacy& phObject);

public:
	void set(string, int, Medicine*);
	int getNumberOfMedicines() const;
	string getBranch() const;
	double getTotal() const;
	Medicine* getPointer() const;
	void findTotal();

	Pharmacy operator+(const Pharmacy&) const;
	Pharmacy& operator=(const Pharmacy&);
    Pharmacy(const Pharmacy&);
    Pharmacy(string, int, Medicine*);
    Pharmacy();
	~Pharmacy();

private:
	string branch;
	double total;
	int numberOfMedicines;
	Medicine *p;
};


#endif // PHARMACY_H_INCLUDED
