#ifndef LAB_8_H_INCLUDED
#define LAB_8_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int numberofkids=10;

struct Child
{
    string name;
    int age;
    double toysCost;
};

class Kindergarten
{
    public :

        void set(string,int);
        void get(string&,int&)const;
        float getCost()const;
        void calculateCost();
        void print();
        Kindergarten(string="",int =0);

    private:
        string name;
        double cost,numberOfChildren;
        Child kids[numberofkids];

};

#endif // LAB_8_H_INCLUDED
