#pragma once

#include "Document.h"

class Magzine : public Document
{
private:
	string MagzineUser;

public:
	void SetMagzineData()
	{
		cin.clear();
		cin.sync();
		cout << "Enter The Category : ";
		getline(cin, Category);
		cout << "Enter The Mazgine Name  : ";
		getline(cin, title);
		cout << "Enter the library code : ";
		getline(cin, LibraryCode);
		cin.clear();
		cin.sync();
		cout << "Enter the year of publication : ";
		cin >> YearPublication;
	}
	void displayagzine()
	{
		cout << "************************************" << endl;
		cout << "Category\t" << Category << endl;
		cout << "************************************" << endl;
		cout << "Magzine Name : " << title << endl;

		cout << "Libraray Code is : " << LibraryCode << endl;

		cout << "Year of Publication : " << YearPublication << endl;
		// when we call this function it will shows the issuer account name
		//  and number if it is issued else it will shows the status of available
		if (GetStatus() == "Issued")
		{
			cout << "The Magzine Status is : " << Status << endl;
			cout << "The Return Date is : " << returnDate << endl;
			cout << "Issuer Name : " << HiddenName << endl;
			cout << "Issuer Account Number  : " << HiddenUser << endl;
		}
		else
		{
			cout << "The Mazgine Status is : " << Status << endl;
		}
	}
	string GetMagzineName()
	{
		return title;
	}
	void SetMagzineUser(string user)
	{
		MagzineUser = user;
	}
	string GetMagzineUser()
	{
		return MagzineUser;
	}
};
