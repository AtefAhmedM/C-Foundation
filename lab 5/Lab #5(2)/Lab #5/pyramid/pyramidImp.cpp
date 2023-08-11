//   pyramidImp.cpp

#include "pyramid.h"

void pyramid::set(double s1, double s2, double s3, double h)
{
	triangle::set(s1, s2, s3);
	height = h;
	findSurfaceArea();
	findVolume();
}

void pyramid::findSurfaceArea()
{
	double r, s, t;

	t = (sideA + sideB + sideC) / 2;
	r = sqrt((t-sideA)*(t-sideB)*(t-sideC) / t);
	s = sqrt(height*height + r*r);

	surfaceArea = getArea() + s * getPerimeter() / 2;
}

void pyramid::findVolume()
{
	volume = height * getArea() / 3;
}

void pyramid::display() const
{
	triangle::display();
	cout << "Pyramid height         = " << height;
	cout << "\nPyramid surface area   = " << surfaceArea;
	cout << "\nPyramid volume         = " << volume << "\n\n";
}

pyramid::pyramid(double s1, double s2, double s3, double h)
	:triangle(s1, s2, s3)
{
	height = h;
	findSurfaceArea();
	findVolume();
}
