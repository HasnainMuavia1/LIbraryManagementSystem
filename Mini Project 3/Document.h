#pragma once
#include <iostream>

using namespace std;

#include <string>
class Document
{
protected:
	string title, AuthorName, Category, Status, ISBN, LibraryCode, returnDate, HiddenName, HiddenUser;
	int YearPublication, NumberCopies;

public:
	void SetHiddenName(string Hidde1)
	{
		HiddenName = Hidde1;
	}
	string GetHidden()
	{
		return HiddenName;
	}
	void SetHiddenUser(string hidden11)
	{
		HiddenUser = hidden11;
	}
	string GethiddenUser()
	{
		return HiddenUser;
	}
	Document()
	{
		title = "", AuthorName = "", Category = "", Status = "Available", ISBN = "", LibraryCode = "";
		YearPublication = 0, NumberCopies = 0;
	}
	void SetReturnDate(string ReturnDate1)
	{
		returnDate = ReturnDate1;
	}

	string getCategory()
	{
		return Category;
	}
	void SetCopies(int copies)
	{
		NumberCopies = copies;
	}
	int GetCopies()
	{
		return NumberCopies;
	}
	void SetStatus(string status1)
	{
		Status = status1;
	}
	string GetStatus()
	{
		return Status;
	}
};