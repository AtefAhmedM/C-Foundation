// Student.h

#include <iostream>

using namespace std;

class Student
{
public:
    void set(string, string, int);
    void get(string&, string&, int&, int&) const;
    void print() const;
    void calculateCost();
    static int getCount();
    static int getTotalCost();
    Student(string = "00000", string = "Engineering", int = 10);
    ~Student();

private:
    string id, college;
    int numberOfCredits, cost;
    static int count, totalCost;
};
