#include "lab11.h"

void Complex::set(double r,double i)
{
    realPart=r;
    imaginaryPart=i;

}
void Complex::print() const
{
    cout << "(" << realPart << ", " << imaginaryPart << ")" << endl << endl;
}

void Complex::get(double& r,double& i)const
{
    r=realPart;
    i=imaginaryPart;
}
Complex::Complex(double r,double i)
{
    realPart=r;
    imaginaryPart=i;
}
void Complex::operator+=(const Complex& obj)
{
    realPart=realPart+ obj.realPart;
    imaginaryPart=imaginaryPart+ obj.imaginaryPart;

}
const Complex& Complex::operator=(const Complex& obj)
{
    if (this != &obj)
{
	realPart=obj.realPart;
	imaginaryPart=obj.imaginaryPart;
}
return *this;
}

istream& operator>>(istream& obj1,const Complex& obj2)
{
    obj1>>obj2.realPart>>obj2.imaginaryPart;
    return obj1;
}
ostream& operator<<(ostream& obj1,const Complex& obj2)
{
    obj1<<"("<<obj2.realPart<<","<<obj2.imaginaryPart<<")";
    return obj1;
}
