//   TextbookImp.cpp

#include "Textbook.h"

void Textbook::set(string bISBN, string bTitle, string bAuthor, int bPrice, string cCode, string cTitle)
{
	Book::set(bISBN, bTitle, bAuthor, bPrice);
	courseCode = cCode;
	courseTitle = cTitle;
}

void Textbook::display() const
{
	Book::display();
	cout << "The book is used as a textbook for the following course:" << "\nCourse code is: "
		 << courseCode << "\nCourse title is: " << courseTitle << endl;
}

Textbook::Textbook(string bISBN, string bTitle, string bAuthor, int bPrice, string cCode, string cTitle)
	:Book(bISBN, bTitle, bAuthor, bPrice)
{
	courseCode = cCode;
	courseTitle = cTitle;
}
