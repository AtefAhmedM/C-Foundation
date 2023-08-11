//   BookImp.cpp

#include "Book.h"

void Book::set(string bISBN, string bTitle, string bAuthor, int bPrice)
{
	ISBN = bISBN;
	title = bTitle;
	author = bAuthor;
	price = bPrice;
}

void Book::get(string& bISBN, string& bTitle, string& bAuthor, int& bPrice) const
{
	bISBN = ISBN;
	bTitle = title;
	bAuthor = author;
	bPrice = price;
}

void Book::display() const
{
	cout << "The book information is as follow:\nISBN is: " << ISBN << "\nTitle is: "
		 << title << "\nAuthor is: " << author << "\nPrice is: " << price << endl;
}

Book::Book(string bISBN, string bTitle, string bAuthor, int bPrice)
{
	set(bISBN, bTitle, bAuthor, bPrice);
}
