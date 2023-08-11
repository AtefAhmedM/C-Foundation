//   triangle.h

#ifndef triangle_h
#define triangle_h

#include <iostream>
#include <cmath>

using namespace std;

class triangle
{
public:
	void set(double, double, double);
	void get(double&, double&, double&) const;
	void findPerimeter();
	void findArea();
	double getArea() const;
	double getPerimeter() const;
	void display() const;
	triangle(double = 0, double = 0, double = 0);

protected:
	double sideA, sideB, sideC, area, perimeter;
};
#endif
