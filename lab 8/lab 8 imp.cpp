#include "lab 8.h"
ifstream inFile("Child.txt",ios::in);
void Kindergarten::set(string n,int noc)
{
name=n;
numberOfChildren=noc;
for(int i=0;i<numberOfChildren;i++)
{
    getline(inFile,kids[i].name,',')
    inFile>>kids[i].age>>kids[i].toysCost;
}
calculateCost();
}
void Kindergarten::get(string& n,int& noc) const
{
name=n;
numberOfChildren=noc;

}
void Kindergarten::calculateCost()
{
     float sum=0;

	for(int i=0; i<numberOfChildren; i++)
	    sum += kids[i].toysCost;

    cost = sum;
}
float Kindergarten::getCost()const
{
    return cost;
}
void Kindergarten::print()
{
    cout << name << " Kindergarten has " << numberOfChildren
         << " children with toys worth " << cost << " dirham" << endl;
}
Kindergarten::Kindergarten(string n,int noc)
{
 name = n;
	numberOfChildren = noc;

	for(int i=0; i<numberOfChildren; i++)
    {
        kids[i].name = "";
        kids[i].age = 0;
        kids[i].toysCost = 0;
    }

	calculateCost();
}

