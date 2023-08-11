//   driver.cpp

#include "pyramid.h"

int main()
{
	triangle T(2, 3, 4);
	T.display();

	pyramid P;
	P.set(2, 3, 4, 7);
	P.display();

	return 0;
}
