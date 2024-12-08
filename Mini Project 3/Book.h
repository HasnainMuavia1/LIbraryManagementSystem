#pragma once
#include "Document.h"

class Book : public Document
{
private:
	string BookUser;

public:
	int SetBookData()
	{
		cin.clear();
		cin.sync();
		cout << "Enter The Category : ";
		getline(cin, Category);
		cout << "Enter The Book Title : ";
		getline(cin, title);
		cout << "Enter The Auther Name : ";
		getline(cin, AuthorName);
		cout << "Enter The ISBN : ";
		getline(cin, ISBN);
		cout << "Enter the library code : ";
		getline(cin, LibraryCode);
		cin.clear();
		cin.sync();
		cout << "Enter the year of publication : ";
		cin >> YearPublication;
		cin.clear();
		cin.sync();
		cout << "Enter the number of copies do you want : ";
		cin >> NumberCopies;
		return 0;
	}
	void display()
	{
		cout << "************************************" << endl;
		cout << "Category\t" << Category << endl;
		cout << "************************************" << endl;
		cout << "Book Name : " << title << endl;
		cout << "Author Name : " << AuthorName << endl;
		cout << "Libraray Code is : " << LibraryCode << endl;
		cout << "ISBN is : " << ISBN << endl;
		cout << "Year of Publication : " << YearPublication << endl;
		// when we call this function it will shows the issuer account name
		//  and number if it is issued else it will shows the status of available
		if (GetStatus() == "Issued")
		{
			cout << "The Book Status is : " << Status << endl;
			cout << "The Return Date is : " << returnDate << endl;
			cout << "Issuer Name : " << HiddenName << endl;
			cout << "Issuer Account Number  : " << HiddenUser << endl;
		}
		else
		{
			cout << "The Book Status is : " << Status << endl;
		}
	}
	string GetBookName()
	{
		return title;
	}
	void setBookUser(string user)
	{
		BookUser = user;
	}
	string GetBookUser()
	{
		return BookUser;
	}
};
