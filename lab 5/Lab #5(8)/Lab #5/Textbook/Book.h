//   Book.h

#ifndef book_h
#define book_h

#include <iostream>

using namespace std;

class Book
{
public:
	void set(string, string, string, int);
	void get(string&, string&, string&, int&) const;
	void display() const;
	Book(string = "", string = "", string = "", int = 0);

protected:
	string ISBN, title, author;
	int price;
};
#endif
