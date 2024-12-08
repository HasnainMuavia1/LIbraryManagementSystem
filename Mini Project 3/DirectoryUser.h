#pragma once

#include <iostream>
#include <string>

#include "Faculty.h"
#include "Student.h"
#include "Staff.h"

#include "DirectoryDocument.h"
DirectoryDocument obj;
using namespace std;

class DirectoryUser
{

private:
	Staff stdstaff[50];
	Student stdstudent[50];
	Faculty stdfaculty[50];
	// craeted this index to signup different user if person logout and then again he want to
	//  signup the loop will start from the beginning we want to save the index so we did this

	int index = 0;

public:
	int MainScreen()
	{

		system("cls");
		cout << "|*****************************************|" << endl;
		cout << "|===============> Welcome <===============|" << endl;
		cout << "|*****************************************|" << endl;
		int choice;

		cout << "Enter Your Choice : \n 1)Signup\t\t2)Login\n 3)Exit" << endl;
		cin >> choice;
		if (choice == 1)
		{

			SignupScreen(index);
			index++;
		}

		else if (choice == 2)
		{
			LoginScreen();
		}
		else
		{
			return 0;
		}

		return 0;
	}
	int SignupScreen(int index)
	{
		system("cls");
		int choice;
		cout << "|*****************************************|" << endl;
		cout << "|=============> Signup Screen <===========|" << endl;
		cout << "|*****************************************|" << endl;
		cout << " 1)Signup As A Teacher \n 2)Signup As A Student \n 3)signup As A Staff\n 4)exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			system("cls");
			for (int i = 0; i < 50; i++)
			{
				cin.clear();
				cin.sync();
				string name, user, pass;
				cout << "Enter Your Name : ";
				getline(cin, name);
				while (1)
				{
					cout << "Enter User Name : ";
					getline(cin, user);
					if (user == stdfaculty[i].getuser())
					{
						int choice;
						cout << "Id Already Exist Press 1 for Try Again else for main : ";
						cin >> choice;
						if (choice == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else
					{
						cout << "Enter Your Password : ";
						getline(cin, pass);
						stdfaculty[index].setter(user, pass, name);

						cout << "Signup Successfully ! " << endl;
						break;
					}
				}
				break;
			}
			system("cls");
			LoginScreen();
			return 0;
		}
		break;
		case 2:
		{
			system("cls");
			for (int i = 0; i < 50; i++)
			{
				cin.clear();
				cin.sync();
				string name, user, pass;
				cout << "Enter Your Name : ";
				getline(cin, name);
				while (1)
				{
					cout << "Enter User Name : ";
					getline(cin, user);
					if (user == stdstudent[i].getuser())
					{
						int choice;
						cout << "Id Already Exist Press 1 for Try Again else for main : ";
						cin >> choice;
						if (choice == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else
					{
						cout << "Enter Your Password : ";
						getline(cin, pass);
						stdstudent[i].setter(user, pass, name);
						cout << "Signup Successfully ! " << endl;

						break;
					}
				}
				break;
			}
			system("cls");
			LoginScreen();
			return 0;
		}
		break;
		case 3:
		{
			system("cls");
			for (int i = 0; i < 50; i++)
			{
				cin.clear();
				cin.sync();
				string name, user, pass;
				cout << "Enter Your Name : ";
				getline(cin, name);
				while (1)
				{
					cout << "Enter User Name : ";
					getline(cin, user);
					if (user == stdstaff[i].getuser())
					{
						int choice;
						cout << "Id Already Exist Press 1 for Try Again else for main : ";
						cin >> choice;
						if (choice == 1)
						{
							continue;
						}
						else
						{
							return 0;
						}
					}
					else
					{
						cout << "Enter Your Password : ";
						getline(cin, pass);
						stdstaff[index].setter(user, pass, name);

						// Name = name;
						// Numb = user;
						cout << "Signup Successfully ! " << endl;
						break;
					}
				}
				break;
			}
			system("cls");
			LoginScreen();
			return 0;
		}
		break;
		case 4:
		{
			MainScreen();
			return 0;
		}
		break;

		default:
			cout << "Wrong choice ! " << endl;
			break;
		}
		return 0;
	}
	int LoginScreen()
	{
		system("cls");

		while (1)
		{
			cin.clear();
			cin.sync();

			int choice;
			cout << "|-----------------------------------------|" << endl;
			cout << "|-------------> Login Screen <------------|" << endl;
			cout << "|-----------------------------------------|" << endl;

			cout << " 1)Login As A Teacher \n 2)Login As A Student \n 3)Login As A Staff\n 4)exit" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("cls");
				while (1)
				{
					string user1, pass1;
					int flag1 = 0;
					int flag2 = 0;
					cin.clear();
					cin.sync();
					cout << " Enter Username : ";
					getline(cin, user1);
					for (int i = 0; i < 50; i++)
					{
						if (user1 == stdfaculty[i].getuser())
						{
							flag1 = 1;
							break;
						}
					}
					if (flag1 == 1)
					{
						cin.clear();
						cin.sync();
						while (1)
						{
							cin.clear();

							cin.sync();
							cout << "Enter Password : ";
							getline(cin, pass1);
							for (int i = 0; i < 50; i++)
							{
								if (pass1 == stdfaculty[i].getpass())
								{
									flag2 = 1;
									break;
								}
							}
							if (flag2 != 1)
							{
								flag2 = 0;
								cout << "Wrong Password press 1 to try again else main screen : " << endl;
								cin >> choice;
								if (choice == 1)
								{
									continue;
								}
								else
								{
									break;
								}
							}
							else

							{

								cout << "Login Successsfully ! " << endl;
								system("cls");

								MenuFaculty();
								return 0;
							}
						}
					}
					else
					{
						flag1 = 0;
						cout << "Wrong Username press 1 to try again else main screen : " << endl;
						cin >> choice;
						if (choice == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
			}
			break;
			case 2:
			{
				system("cls");
				while (1)
				{
					string user1, pass1;
					int flag1 = 0;
					int flag2 = 0;
					cin.clear();
					cin.sync();
					cout << " Enter Username : ";
					getline(cin, user1);
					for (int i = 0; i < 50; i++)
					{
						if (user1 == stdstudent[i].getuser())
						{
							flag1 = 1;
							break;
						}
					}
					if (flag1 == 1)
					{
						cin.clear();
						cin.sync();
						while (1)
						{
							cin.clear();

							cin.sync();
							cout << "Enter Password : ";
							getline(cin, pass1);
							for (int i = 0; i < 50; i++)
							{
								if (pass1 == stdstudent[i].getpass())
								{
									flag2 = 1;
									break;
								}
							}
							if (flag2 != 1)
							{
								flag2 = 0;
								cout << "Wrong Password press 1 to try again else main screen : " << endl;
								cin >> choice;
								if (choice == 1)
								{
									continue;
								}
								else
								{
									break;
								}
							}
							else

							{

								cout << "Login Successsfully ! " << endl;
								system("cls");
								MenuStudent();
								return 0;
							}
						}
					}
					else
					{
						flag1 = 0;
						cout << "Wrong Username press 1 to try again else main screen : " << endl;
						cin >> choice;
						if (choice == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
			}
			break;
			case 3:
			{
				system("cls");
				while (1)
				{
					string user1, pass1;
					int flag1 = 0;
					int flag2 = 0;
					cin.clear();
					cin.sync();
					cout << " Enter Username : ";
					getline(cin, user1);
					for (int i = 0; i < 50; i++)
					{
						if (user1 == stdstaff[i].getuser())
						{
							flag1 = 1;
							break;
						}
					}
					if (flag1 == 1)
					{
						cin.clear();
						cin.sync();
						while (1)
						{
							cin.clear();

							cin.sync();
							cout << "Enter Password : ";
							getline(cin, pass1);
							for (int i = 0; i < 50; i++)
							{
								if (pass1 == stdstaff[i].getpass())
								{
									flag2 = 1;
									break;
								}
							}
							if (flag2 != 1)
							{
								flag2 = 0;
								cout << "Wrong Password press 1 to try again else main screen : " << endl;
								cin >> choice;
								if (choice == 1)
								{
									continue;
								}
								else
								{
									break;
								}
							}
							else

							{

								cout << "Login Successsfully ! " << endl;
								system("cls");
								MenuStaff();
								return 0;
							}
						}
					}
					else
					{
						flag1 = 0;
						cout << "Wrong Username press 1 to try again else main screen : " << endl;
						cin >> choice;
						if (choice == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
			}
			break;
			case 4:
			{
				MainScreen();
				return 0;
			}
			break;
			default:
				cout << "Wrong choice ! ";
				return 0;
			}
		}
	}
	// re-issue function Which is created separatley becasue it is used in ebery menu
	void ReissueSwitch(string user, string Numb)
	{
		int option;
		cout << " 1)Book\t\t2)Newspaper\n 3)Magzine\t     4)Journel" << endl;
		cin >> option;
		if (option == 1)
		{
			system("cls");
			char choice;
			obj.IssuedDocumentCheck(user, option, Numb);
			cout << "Do You want to re-issue Book(Y/N) : ";
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{

				obj.Reissue(option);
			}
		}
		else if (option == 2)
		{
			system("cls");
			char choice;
			obj.IssuedDocumentCheck(user, option, Numb);
			cout << "Do You want to re-issue Newspaper(Y/N) : ";
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{

				obj.Reissue(option);
			}
		}
		else if (option == 3)
		{
			system("cls");
			char choice;
			obj.IssuedDocumentCheck(user, option, Numb);
			cout << "Do You want to re-issue Magzine (Y/N) : ";
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{

				obj.Reissue(option);
			}
		}
		else if (option == 4)
		{
			system("cls");
			char choice;
			obj.IssuedDocumentCheck(user, option, Numb);
			cout << "Do You want to re-issue Journel (Y/N) : ";
			cin >> choice;
			if (choice == 'Y' || choice == 'y')
			{

				obj.Reissue(option);
			}
		}
	}
	int SwitchMenu(int option, string user, string Name, string Numb)
	{
		switch (option)
		{
		case 1:
		{

			IssueDocumentSwitch(Name, Numb, user);
		}
		break;
		case 2:
		{
			int option;
			cout << " 1)Book\t\t2)Newspaper\n 3)Magzine\t     4)Journel" << endl;
			cin >> option;
			if (option == 1)
			{

				obj.IssuedDocumentCheck(user, option, Numb);
			}
			else if (option == 2)
			{

				obj.IssuedDocumentCheck(user, option, Numb);
			}
			else if (option == 3)
			{

				obj.IssuedDocumentCheck(user, option, Numb);
			}
			else if (option == 4)
			{

				obj.IssuedDocumentCheck(user, option, Numb);
			}
			else
			{
				cout << "Wrong Choice ! " << endl;
			}
		}
		break;
		case 3:
		{
			system("cls");
			obj.returnBook(user, Numb);
		}
		break;
		case 4:
		{
			ReissueSwitch(user, Numb);
		}
		break;
		case 5:
		{
			system("cls");
			MainScreen();

			return 1;
		}
		break;

		default:
			cout << "Wrong choice ! ";
			return 0;
		}
		return 0;
	}
	int MenuStudent()
	{

		string user = "Student";

		string Name, Numb;
		// when user signup We get their Name And Username so we pass them issue Book function
		// to to set their name in that function
		Numb = stdstudent[index].getuser();
		Name = stdstudent[index].getname();
		while (1)
		{

			cout << "|*****************************************|" << endl;
			cout << "|\tWelcome To The Library            |" << endl;
			cout << "|*****************************************|" << endl;
			cout << " 1)Search a Document to issue " << endl;
			cout << " 2)See issued Document" << endl;
			cout << " 3)Return Document" << endl;
			cout << " 4)Re- Issue Document" << endl;
			cout << "5)Logout " << endl;
			int option;
			cin >> option;
			if (SwitchMenu(option, user, Name, Numb) == 1)
			{
				return 0;
			}
		}
		return 0;
	}
	// created this function separatley because it will use in every function
	// it is a issue book function
	void IssueDocumentSwitch(string Name, string Numb, string user)
	{
		int option;
		cout << " 1)Book\t\t2)Newspaper\n 3)Magzine\t     4)Journel" << endl;
		cin >> option;
		if (option == 1)
		{
			system("cls");
			obj.IssueDocument(Name, Numb, user, option);
		}
		else if (option == 2)
		{
			system("cls");
			obj.IssueDocument(Name, Numb, user, option);
		}
		else if (option == 3)
		{

			system("cls");
			obj.IssueDocument(Name, Numb, user, option);
		}
		else if (option == 4)
		{
			system("cls");
			obj.IssueDocument(Name, Numb, user, option);
		}
		else
		{
			cout << "Wrong Choice ! " << endl;
		}
	}
	int MenuStaff()
	{
		// string variable which passs in issue book function when we
		// display every member issued books so it will work as a identity

		string user = "staff";
		string Name, Numb;
		Numb = stdstaff[index].getuser();
		Name = stdstaff[index].getname();

		while (1)
		{
			cout << "|*****************************************|" << endl;
			cout << "|\tWelcome To The Library            |" << endl;
			cout << "|*****************************************|" << endl;

			cout << " 1)Search For Document " << endl;
			cout << " 2)See Issued Document " << endl;
			cout << " 3)Return Document" << endl;
			cout << " 4)Re-issue Document" << endl;
			cout << " 5)Remove fine of any user" << endl;
			cout << " 6)Enter New Book Document " << endl;
			cout << " 7)Logout" << endl;
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("cls");

				IssueDocumentSwitch(Name, Numb, user);
			}
			break;
			case 2:
			{
				int option;
				cout << " 1)Book\t\t2)Newspaper\n 3)Magzine\t     4)Journel" << endl;
				cin >> option;
				system("cls");
				int choice;
				if (option == 1)
				{
					cout << "Enter the choice" << endl;
					cout << "1)By You \t\t2)By Users " << endl;
					cin >> choice;
					if (choice == 1)
					{
						obj.IssuedDocumentCheck(user, option, Numb);
						cout << endl;
					}
					else

					{
						obj.IssuedDocumentMembers(option);
						cout << endl;
					}
				}
				else if (option == 2)
				{
					cout << "Enter the choice" << endl;
					cout << "1)By You \t\t2)By Users " << endl;
					cin >> choice;
					if (choice == 1)
					{
						obj.IssuedDocumentCheck(user, option, Numb);
						cout << endl;
					}
					else

					{
						obj.IssuedDocumentMembers(option);
						cout << endl;
					}
				}
				else if (option == 3)
				{
					cout << "Enter the choice" << endl;
					cout << "1)By You \t\t2)By Users " << endl;
					cin >> choice;
					if (choice == 1)
					{
						obj.IssuedDocumentCheck(user, option, Numb);
						cout << endl;
					}
					else

					{
						obj.IssuedDocumentMembers(option);
						cout << endl;
					}
				}
				else if (option == 4)
				{

					cout << "Enter the choice" << endl;
					cout << "1)By You \t\t2)By Users " << endl;
					cin >> choice;
					if (choice == 1)
					{
						obj.IssuedDocumentCheck(user, option, Numb);
						cout << endl;
					}
					else

					{
						obj.IssuedDocumentMembers(option);
						cout << endl;
					}
				}
				else
				{
					cout << "Wrong choice ! " << endl;
				}
			}
			break;
			case 3:
			{
				system("cls");
				obj.returnBook(user, Numb);
			}
			break;
			case 4:
			{
				ReissueSwitch(user, Numb);
			}
			break;
			case 5:
			{
				cout << "Function Not Available ! " << endl;
			}

			break;

			case 6:
			{
				int choice;
				cout << " 1)Book\t\t2)Newspaper\n 3)Magzine\t     4)Journel" << endl;
				cin >> choice;
				if (choice == 1)
				{
					system("cls");
					while (1)
					{
						obj.AddBook();
						char choice;
						cout << "Do You Want To add Another Book(Y/N) : " << endl;
						cin >> choice;
						if (choice == 'Y' || choice == 'y')
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				else if (choice == 2)
				{
					system("cls");
					while (1)
					{
						obj.Newspaper();
						char choice;
						cout << "Do You Want To add Another Newspaper(Y/N) : " << endl;
						cin >> choice;
						if (choice == 'Y' || choice == 'y')
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				else if (choice == 3)
				{
					system("cls");
					while (1)
					{
						obj.AddMagzine();
						char choice;
						cout << "Do You Want To add Another Magzine (Y/N) : " << endl;
						cin >> choice;
						if (choice == 'Y' || choice == 'y')
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				else if (choice == 4)
				{
					system("cls");
					while (1)
					{
						obj.AddJournel();
						char choice;
						cout << "Do You Want To add Another Journel (Y/N) : " << endl;
						cin >> choice;
						if (choice == 'Y' || choice == 'y')
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				else
				{
					cout << "Wrong choice ! " << endl;
					return 0;
				}
			}

			break;
			case 7:
			{
				system("cls");
				MainScreen();

				return 1;
			}
			break;
			default:
				cout << "Wrong choice ! " << endl;
				return 0;
			}
		}
		return 0;
	}

	int MenuFaculty()
	{
		string user = "Teacher";
		string Name, Numb;
		Numb = stdfaculty[index].getuser();
		Name = stdfaculty[index].getname();
		while (1)
		{

			cout << "|*****************************************|" << endl;
			cout << "|\tWelcome To The Library            |" << endl;
			cout << "|*****************************************|" << endl;
			cout << " 1)Search a Document to issue " << endl;
			cout << " 2)See issued Document" << endl;
			cout << " 3)Return Document" << endl;
			cout << " 4)Re- Issue Document" << endl;
			cout << "5)Logout " << endl;
			int option;
			cin >> option;

			if (SwitchMenu(option, user, Name, Numb) == 1)
			{
				return 0;
			}
		}
		return 0;
	}
};
