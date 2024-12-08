#pragma once

#include "Document.h"

class NewsPaper : public Document
{
private:
	string NewspaperUser;

public:
	// setfunction
	void SetnewspaperData()
	{
		cin.clear();
		cin.sync();
		cout << "Enter The Category : ";
		getline(cin, Category);
		cout << "Enter The Name  : ";
		getline(cin, title);
		cout << "Enter the library code : ";
		getline(cin, LibraryCode);
		cin.clear();
		cin.sync();
		cout << "Enter the year of publication : ";
		cin >> YearPublication;
	}
	void displayNewspaper()
	{
		cout << "************************************" << endl;
		cout << "Category\t" << Category << endl;
		cout << "************************************" << endl;
		cout << "Newspaper Name : " << title << endl;

		cout << "Libraray Code is : " << LibraryCode << endl;

		cout << "Year of Publication : " << YearPublication << endl;
		// when we call this function it will shows the issuer account name
		//  and number if it is issued else it will shows the status of available
		if (GetStatus() == "Issued")
		{
			cout << "The Newspaper Status is : " << Status << endl;
			cout << "The Return Date is : " << returnDate << endl;
			cout << "Issuer Name : " << HiddenName << endl;
			cout << "Issuer Account Number  : " << HiddenUser << endl;
		}
		else
		{
			cout << "The Newspaper Status is : " << Status << endl;
		}
	}
	// getter function Of newspaper Name
	string GetNewspaperName()
	{
		return title;
	}
	void SetNewspaperUser(string user)
	{
		NewspaperUser = user;
	}
	string GetNewspaperUser()
	{
		return NewspaperUser;
	}
};
