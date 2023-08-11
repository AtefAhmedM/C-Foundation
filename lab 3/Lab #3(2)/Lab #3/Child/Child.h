// Child.h

#include <iostream>
#include <fstream>

using namespace std;

const int arraySize = 10;

struct Child
{
    string name;
	int age;
	float toysCost;
};

class Kindergarten
{
public:
    void set(string, int);
    void get(string&, int&) const;
    float getCost() const;
    void print() const;
    Kindergarten(string = "Ali Omar", int = 2);

private:
    string name;
    int numberOfChildren;
    float cost;
    Child kids[arraySize];
    void calculateCost();
};
