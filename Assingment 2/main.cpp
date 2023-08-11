#include "Pharmacy.h"

ifstream inFile("pharmacy.txt", ios::in);

int main()
{
	Pharmacy firstBranch, secondBranch, thirdBranch, allBranches;

	inFile >> firstBranch >> secondBranch >> thirdBranch;

	allBranches = firstBranch + secondBranch + thirdBranch;

	cout << firstBranch << endl;
	cout << secondBranch << endl;
	cout << thirdBranch << endl;
	cout << allBranches << endl;
   	return 0;
}
