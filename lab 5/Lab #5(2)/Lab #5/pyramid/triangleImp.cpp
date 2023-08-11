//   triangleImp.cpp

#include "triangle.h"

void triangle::set(double s1, double s2, double s3)
{
	sideA = s1;
	sideB = s2;
	sideC = s3;
	findPerimeter();
	findArea();
}

void triangle::get(double& s1, double& s2, double& s3) const
{
	s1 = sideA;
	s2 = sideB;
	s3 = sideC;
}

void triangle::findPerimeter()
{
	perimeter = sideA + sideB + sideC;
}

void triangle::findArea()
{
	double t;

	t = (sideA + sideB + sideC) / 2;
	area = sqrt(t*(t-sideA)*(t-sideB)*(t-sideC));
}

double triangle::getPerimeter() const
{
	return perimeter;
}

double triangle::getArea() const
{
	return area;
}

void triangle::display() const
{
	cout << "The three sides of the triangle are: " << sideA << ", " << sideB << ", " << sideC << endl;
	cout << "\nPerimeter     = " << getPerimeter();
	cout << "\nArea          = " << getArea() << "\n\n";
}

triangle::triangle(double s1, double s2, double s3)
{
	set(s1, s2, s3);
}
