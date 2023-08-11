//   pyramid.h

#ifndef pyramid_h
#define pyramid_h

#include "triangle.h"

class pyramid: public triangle
{
public:
	void set(double, double, double, double);
	void findSurfaceArea();
	void findVolume();
	void display() const;
	pyramid(double = 0, double = 0, double = 0, double = 0);

private:
	double height, surfaceArea, volume;
};
#endif