//   driver.cpp

#include "Textbook.h"

int main()
{
	Book MalikCpp("1-4188-3639-7", "C++ Programming", "D.S. Malik", 72);
	MalikCpp.display();

	Textbook CSII;
	CSII.set("1-4188-3639-7", "C++ Programming", "D.S. Malik", 72, "1411210", "Int. CS II");
	CSII.display();

	return 0;
}
