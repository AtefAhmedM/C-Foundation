//   Textbook.h

#ifndef textbook_h
#define textbook_h

#include "Book.h"

class Textbook: public Book
{
public:
	void set(string, string, string, int, string, string);
	void display() const;
	Textbook(string = "", string = "", string = "", int = 0, string = "", string = "");

private:
	string courseCode, courseTitle;
};
#endif
