#ifndef LAB11_H_INCLUDED
#define LAB11_H_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:
   double realPart,imaginaryPart;
public:
    void set(double,double);
    void print()const;
    void get(double&,double&) const;
    Complex(double =0.0,double =0.0);

   void operator+=(const Complex& obj);
   const Complex& operator=(const Complex& obj);

friend istream& operator>>(istream& ,const Complex& );
friend ostream& operator<<(ostream& ,const Complex&);
};


#endif // LAB11_H_INCLUDED
