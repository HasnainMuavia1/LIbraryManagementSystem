#pragma once
#include "Document.h"

class Journel : public Document
{
private:
	string JournelUser;

public:
	void SetJournelData()
	{
		cin.clear();
		cin.sync();
		cout << "Enter The Category : ";
		getline(cin, Category);
		cout << "Enter The Journel Name  : ";
		getline(cin, title);
		cout << "Enter the library code : ";
		getline(cin, LibraryCode);
		cin.clear();
		cin.sync();
		cout << "Enter the year of publication : ";
		cin >> YearPublication;
	}
	void displayJournel()
	{
		cout << "************************************" << endl;
		cout << "Category\t" << Category << endl;
		cout << "************************************" << endl;
		cout << "journel  Name : " << title << endl;

		cout << "Libraray Code is : " << LibraryCode << endl;

		cout << "Year of Publication : " << YearPublication << endl;
		// when we call this function it will shows the issuer account name
		//  and number if it is issued else it will shows the status of available
		if (GetStatus() == "Issued")
		{
			cout << "The Journel Status is : " << Status << endl;
			cout << "The Return Date is : " << returnDate << endl;
			cout << "Issuer Name : " << HiddenName << endl;
			cout << "Issuer Account Number  : " << HiddenUser << endl;
		}
		else
		{
			cout << "The Journel Status is : " << Status << endl;
		}
	}
	string GetJournelName()
	{
		return title;
	}
	void SetJournelUser(string user)
	{
		JournelUser = user;
	}
	string GetJournelUser()
	{
		return JournelUser;
	}
};
