#pragma once

#include <iostream>

using namespace std;
#include <string>

class User
{
protected:
	string AccountNumb, TotalFine, returnDate, username, password, Name;
	int TotalBooks, choice;

public:
	User()
	{
		AccountNumb = "", TotalFine = "", returnDate = "";
		TotalBooks = 0, choice = 0;
	}
	string getuser()
	{
		return username;
	}
	string getpass()
	{
		return password;
	}
	void setter(string user1, string pass1, string name1)
	{
		username = user1;
		password = pass1;
		Name = name1;
	}
	void DisplayCredentials()
	{
		cout << "Account Number Is : " << username << endl;
		cout << "Name is : " << Name << endl;
	}
	string getname()
	{
		return Name;
	}
};