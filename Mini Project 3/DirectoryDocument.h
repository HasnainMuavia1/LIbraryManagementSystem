#include "Book.h"
#include "Magzine.h"
#include "Newspaper.h"
#include "Journel.h"
// created this index in globally because when we logout the user we dont want to reset the
//  index beacuse it will overwrite the data beacuse loop will start from 0 always
int BookIndex = 0;
int NewspaperIndex = 0;
int JournelIndex = 0;
int MagzineIndex = 0;
class DirectoryDocument
{
private:
    Book Barray[50];
    Journel Jarray[50];
    Magzine Marray[50];
    NewsPaper Narray[50];

public:
    // Add Book Function In which We are calling the set book data function of Book Class
    int AddBook()
    {

        Barray[BookIndex].SetBookData();
        // The inddex will iterate and it will remain at the position when we will add new book it will
        // iterate again
        BookIndex++;
        return 0;
    }
    int AddJournel()
    {
        // The inddex will iterate and it will remain at the position when we will add new book it will
        // iterate again
        Jarray[JournelIndex].SetJournelData();
        JournelIndex++;
        return 0;
    }
    int AddMagzine()
    {
        // The inddex will iterate and it will remain at the position when we will add new book it will
        // iterate again
        Marray[MagzineIndex].SetMagzineData();
        MagzineIndex++;
        return 0;
    }
    int Newspaper()
    {
        // The inddex will iterate and it will remain at the position when we will add new book it will
        // iterate again
        Narray[NewspaperIndex].SetnewspaperData();
        NewspaperIndex++;
        return 0;
    }
    // re issue function which will re issue the issued books

    int Reissue(int option)
    {
        // the option is a paramterized which is passed from the Directory user class
        // to Re Issue Journel/magzine/newspaper/book
        if (option == 1)
        {
            while (1)
            {
                string name;
                fflush(stdin);
                int flag = 0;
                int indexGet;

                cout << "Enter Book Name to be re-issued : ";
                getline(cin, name);
                for (int i = 0; i < 50; i++)
                {
                    if (name == Barray[i].GetBookName())
                    {
                        flag = 1;
                        indexGet = i;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Book with this name : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    cin.clear();
                    cin.sync();
                    string date;
                    cout << "Enter The return Date(Y/M/D): ";
                    getline(cin, date);
                    Barray[indexGet].SetStatus("Issued");
                    Barray[indexGet].SetReturnDate(date);
                    cout << "Successfully Re-issued ! " << endl;
                    break;
                }
            }
        }
        else if (option == 2)
        {
            while (1)
            {
                string name;
                fflush(stdin);
                int flag = 0;
                int indexGet;

                cout << "Enter Newspaper Name to be re-issued : ";
                getline(cin, name);
                for (int i = 0; i < 50; i++)
                {
                    if (name == Narray[i].GetNewspaperName())
                    {
                        flag = 1;
                        indexGet = i;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Newspaper with this name : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    cin.clear();
                    cin.sync();
                    string date;
                    cout << "Enter The return Date(Y/M/D): ";

                    getline(cin, date);

                    Narray[indexGet].SetStatus("Issued");
                    Narray[indexGet].SetReturnDate(date);
                    cout << "Successfully Re-issued ! " << endl;
                    break;
                }
            }
        }
        else if (option == 3)
        {
            while (1)
            {
                string name;
                fflush(stdin);
                int flag = 0;
                int indexGet;

                cout << "Enter Magzine Name to be re-issued : ";
                getline(cin, name);
                for (int i = 0; i < 50; i++)
                {
                    if (name == Marray[i].GetMagzineName())
                    {
                        flag = 1;
                        indexGet = i;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Magzine with this name : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    cin.clear();
                    cin.sync();
                    string date;
                    cout << "Enter The return Date(Y/M/D): ";
                    getline(cin, date);
                    Marray[indexGet].SetStatus("Issued");
                    Marray[indexGet].SetReturnDate(date);
                    cout << "Successfully Re-issued ! " << endl;
                    break;
                }
            }
        }
        else if (option == 4)
        {
            while (1)
            {
                string name;
                fflush(stdin);
                int flag = 0;
                int indexGet;

                cout << "Enter Journel Name to be re-issued : ";
                getline(cin, name);
                for (int i = 0; i < 50; i++)
                {
                    if (name == Jarray[i].GetJournelName())
                    {
                        flag = 1;
                        indexGet = i;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Journel with this name : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    cin.clear();
                    cin.sync();
                    string date;
                    cout << "Enter The return Date(Y/M/D): ";
                    getline(cin, date);
                    Jarray[indexGet].SetStatus("Issued");
                    Jarray[indexGet].SetReturnDate(date);
                    cout << "Successfully Re-issued ! " << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "Wrong Choice ! " << endl;
        }

        return 0;
    }
    // this function is the sub function of the issue book
    int DocumentIssueFunction(string name, string Account, string user, string category, int option)
    {
        if (option == 1)
        {
            string Name = name, AccountNumber = Account;
            int flag = 0;
            cout << "-->Note<-- you Cannot Choose the Issued Book ! " << endl;
            while (1)
            {
                string BookName;

                cin.clear();
                cin.sync();
                cout << "Enter Book Name : ";
                getline(cin, BookName);
                for (int i = 0; i < 50; i++)
                {
                    if (Barray[i].GetStatus() != "Issued" && BookName == Barray[i].GetBookName() && category == Barray[i].getCategory())
                    {
                        cin.clear();
                        cin.sync();
                        string date;
                        cout << "Enter The return Date(Y/M/D): ";
                        getline(cin, date);
                        // when user issued Book The Issue string will pass in status
                        Barray[i].SetStatus("Issued");
                        Barray[i].SetReturnDate(date);
                        // we craeted this hidden Name And user function
                        //  to pass the user name and account number when user issue Book
                        Barray[i].SetHiddenName(Name);
                        Barray[i].SetHiddenUser(AccountNumber);
                        // the user is string variable which saved in every menu it saved Whose
                        // person issued book and by this we will use in order to display the user
                        // Issued Documents
                        Barray[i].setBookUser(user);
                        cout << "Succesfuuly Issued ! " << endl;

                        flag = 1;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Book with this name or you Choose issued Book  : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    return 0;
                }
            }
        }
        else if (option == 2)
        {
            string Name = name, AccountNumber = Account;
            int flag = 0;
            cout << "-->Note<-- you Cannot Choose the Issued Newspaper ! " << endl;
            while (1)
            {
                string NewspaperName;

                cin.clear();
                cin.sync();
                cout << "Enter Newspaper Name : ";
                getline(cin, NewspaperName);
                for (int i = 0; i < 50; i++)
                {
                    if (Narray[i].GetStatus() != "Issued" && NewspaperName == Narray[i].GetNewspaperName() && category == Narray[i].getCategory())
                    {
                        cin.clear();
                        cin.sync();
                        string date;
                        cout << "Enter The return Date(Y/M/D): ";
                        getline(cin, date);
                        Narray[i].SetStatus("Issued");
                        Narray[i].SetReturnDate(date);
                        Narray[i].SetHiddenName(Name);
                        Narray[i].SetHiddenUser(AccountNumber);
                        Narray[i].SetNewspaperUser(user);
                        cout << "Succesfuuly Issued ! " << endl;

                        flag = 1;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Newspaper with this name or you Choose Issued Newspaper : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    return 0;
                }
            }
        }
        else if (option == 3)
        {

            string Name = name, AccountNumber = Account;
            int flag = 0;
            cout << "-->Note<-- you Cannot Choose the Issued Magzine ! " << endl;
            while (1)
            {
                string MagzineName;

                cin.clear();
                cin.sync();
                cout << "Enter Magzine Name : ";
                getline(cin, MagzineName);
                for (int i = 0; i < 50; i++)
                {
                    if (Marray[i].GetStatus() != "Issued" && MagzineName == Marray[i].GetMagzineName() && category == Marray[i].getCategory())
                    {
                        cin.clear();
                        cin.sync();
                        string date;
                        cout << "Enter The return Date(Y/M/D): ";
                        getline(cin, date);
                        Marray[i].SetStatus("Issued");
                        Marray[i].SetReturnDate(date);
                        Marray[i].SetHiddenName(Name);
                        Marray[i].SetHiddenUser(AccountNumber);
                        Marray[i].SetMagzineUser(user);
                        cout << "Succesfuuly Issued ! " << endl;

                        flag = 1;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Magzine with this name or you Choose Issued Magzine : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    return 0;
                }
            }
        }
        else if (option == 4)
        {
            string Name = name, AccountNumber = Account;
            int flag = 0;
            cout << "-->Note<-- you Cannot Choose the Issued Journel ! " << endl;
            while (1)
            {
                string JournelName;

                cin.clear();
                cin.sync();
                cout << "Enter Journel Name : ";
                getline(cin, JournelName);
                for (int i = 0; i < 50; i++)
                {
                    if (Jarray[i].GetStatus() != "Issued" && JournelName == Jarray[i].GetJournelName() && category == Jarray[i].getCategory())
                    {
                        cin.clear();
                        cin.sync();
                        string date;
                        cout << "Enter The return Date(Y/M/D): ";
                        getline(cin, date);
                        Jarray[i].SetStatus("Issued");
                        Jarray[i].SetReturnDate(date);
                        Jarray[i].SetHiddenName(Name);
                        Jarray[i].SetHiddenUser(AccountNumber);
                        Jarray[i].SetJournelUser(user);
                        cout << "Succesfuuly Issued ! " << endl;

                        flag = 1;
                        break;
                    }
                }
                if (flag != 1)
                {
                    cout << "Not Found Any Journel with this name or you Choose Issued Journel : " << endl;
                    int choice;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
                    return 0;
                }
            }
        }

        return 0;
    }
    int IssueDocument(string name, string Account, string user, int option)
    {
        if (option == 1)
        {
            string Name = name, AccountNumber = Account;

            while (1)
            {
                int flag = 0;
                int flag2 = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Barray[i].getCategory().empty() || Barray[i].getCategory() == Barray[i + 1].getCategory())
                    {
                        continue;
                    }
                    else
                    {
                        cout << "--> " << Barray[i].getCategory() << endl;
                        flag2 = 1;
                    }
                }
                if (flag2 != 1)
                {
                    cout << "No Record Found ! " << endl;
                    return 0;
                }
                while (1)
                {
                    int found = 0;
                    string category;
                    cin.clear();
                    cin.sync();
                    cout << "Choose Category : ";
                    getline(cin, category);
                    for (int i = 0; i < 50; i++)
                    {
                        if (category == Barray[i].getCategory())
                        {
                            Barray[i].display();
                            cout << endl;
                            found = 1;
                        }
                    }
                    if (found != 1)
                    {
                        cout << "You Choose Wrong Category ! " << endl;
                        int choice;
                        cout << "Press 1 to Try Again else To return Menu : ";
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
                        DocumentIssueFunction(Name, AccountNumber, user, category, option);
                        return 0;
                    }
                }
            }
        }
        else if (option == 2)
        {

            string Name = name, AccountNumber = Account;

            while (1)
            {
                int flag = 0;
                int flag2 = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Narray[i].getCategory().empty() || Narray[i + 1].getCategory() == Narray[i].getCategory())
                    {
                        continue;
                    }
                    else
                    {
                        cout << "--> " << Narray[i].getCategory() << endl;
                        flag2 = 1;
                    }
                }
                if (flag2 != 1)
                {
                    cout << "No Record Found ! " << endl;
                    return 0;
                }
                while (1)
                {
                    int found = 0;
                    string category;
                    cin.clear();
                    cin.sync();
                    cout << "Choose Category : ";
                    getline(cin, category);
                    for (int i = 0; i < 50; i++)
                    {
                        if (category == Narray[i].getCategory())
                        {
                            Narray[i].displayNewspaper();
                            cout << endl;
                            found = 1;
                        }
                    }
                    if (found != 1)
                    {
                        cout << "You Choose Wrong Category ! " << endl;
                        int choice;
                        cout << "Press 1 to Try Again else To return Menu : ";
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
                        DocumentIssueFunction(Name, AccountNumber, user, category, option);
                        return 0;
                    }
                }
            }
        }
        else if (option == 3)
        {

            string Name = name, AccountNumber = Account;

            while (1)
            {
                int flag = 0;
                int flag2 = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Marray[i].getCategory().empty() || Marray[i + 1].getCategory() == Marray[i].getCategory())
                    {
                        continue;
                    }
                    else
                    {
                        cout << "--> " << Marray[i].getCategory() << endl;
                        flag2 = 1;
                    }
                }
                if (flag2 != 1)
                {
                    cout << "No Record Found ! " << endl;
                    return 0;
                }
                while (1)
                {
                    int found = 0;
                    string category;
                    cin.clear();
                    cin.sync();
                    cout << "Choose Category : ";
                    getline(cin, category);
                    for (int i = 0; i < 50; i++)
                    {
                        if (category == Marray[i].getCategory())
                        {
                            Marray[i].displayagzine();
                            cout << endl;
                            found = 1;
                        }
                    }
                    if (found != 1)
                    {
                        cout << "You Choose Wrong Category ! " << endl;
                        int choice;
                        cout << "Press 1 to Try Again else To return Menu : ";
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
                        DocumentIssueFunction(Name, AccountNumber, user, category, option);
                        return 0;
                    }
                }
            }
        }
        else if (option == 4)
        {

            string Name = name, AccountNumber = Account;

            while (1)
            {
                int flag = 0;
                int flag2 = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Jarray[i].getCategory().empty() || Jarray[i + 1].getCategory() == Jarray[i].getCategory())
                    {
                        continue;
                    }
                    else
                    {
                        cout << "--> " << Jarray[i].getCategory() << endl;
                        flag2 = 1;
                    }
                }
                if (flag2 != 1)
                {
                    cout << "No Record Found ! " << endl;
                    return 0;
                }
                while (1)
                {
                    int found = 0;
                    string category;
                    cin.clear();
                    cin.sync();
                    cout << "Choose Category : ";
                    getline(cin, category);
                    for (int i = 0; i < 50; i++)
                    {
                        if (category == Jarray[i].getCategory())
                        {
                            Jarray[i].displayJournel();
                            cout << endl;
                            found = 1;
                        }
                    }
                    if (found != 1)
                    {
                        cout << "You Choose Wrong Category ! " << endl;
                        int choice;
                        cout << "Press 1 to Try Again else To return Menu : ";
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
                        DocumentIssueFunction(Name, AccountNumber, user, category, option);
                        return 0;
                    }
                }
            }
        }
        else
        {
            cout << "Wrong Choice ! " << endl;
        }

        return 0;
    }
    // this function only shows the user their issued Documents
    int IssuedDocumentCheck(string user, int option, string Numb)
    {
        if (option == 1)
        {
            cout << "Books Issued By You ! " << endl;
            int flag = 0;

            for (int i = 0; i < 50; i++)
            {
                if (Barray[i].GetBookUser() == user && Barray[i].GetStatus() == "Issued" && Barray[i].GethiddenUser() == Numb)
                {
                    Barray[i].display();
                    flag = 1;
                }
            }

            if (flag == 0)
            {
                cout << "record Not Found ! " << endl;
            }
        }
        else if (option == 2)
        {
            cout << "Newspaper Issued By You ! " << endl;
            int flag = 0;

            for (int i = 0; i < 50; i++)
            {
                if (Narray[i].GetNewspaperUser() == user && Narray[i].GetStatus() == "Issued" && Narray[i].GethiddenUser() == Numb)
                {
                    Narray[i].displayNewspaper();
                    flag = 1;
                }
            }

            if (flag == 0)
            {
                cout << "record Not Found ! " << endl;
            }
        }
        else if (option == 3)
        {
            cout << "Magzine Issued By You ! " << endl;
            int flag = 0;

            for (int i = 0; i < 50; i++)
            {
                if (Marray[i].GetMagzineUser() == user && Marray[i].GetStatus() == "Issued" && Marray[i].GethiddenUser() == Numb)
                {
                    Marray[i].displayagzine();
                    flag = 1;
                }
            }

            if (flag == 0)
            {
                cout << "record Not Found ! " << endl;
            }
        }
        else if (option == 4)
        {
            cout << "Journel Issued By You ! " << endl;
            int flag = 0;

            for (int i = 0; i < 50; i++)
            {
                if (Jarray[i].GetJournelUser() == user && Jarray[i].GetStatus() == "Issued" && Jarray[i].GethiddenUser() == Numb)
                {
                    Jarray[i].displayJournel();
                    flag = 1;
                }
            }

            if (flag == 0)
            {
                cout << "record Not Found ! " << endl;
            }
        }
        else
        {
            cout << "Wrong Choice !" << endl;
        }

        return 0;
    }
    // this function is used by staff to display All user Issued Documents Except their
    // issued Books
    int IssuedDocumentMembers(int option)
    {

        if (option == 1)
        {
            int flag = 0;
            for (int i = 0; i < 50; i++)
            {
                if (Barray[i].GetStatus() == "Issued" && Barray[i].GetBookUser() != "staff")
                {
                    Barray[i].display();
                    flag = 1;
                }
            }
            if (flag != 1)
            {
                cout << "Record Not found " << endl;
            }
        }
        else if (option == 2)
        {
            int flag = 0;
            for (int i = 0; i < 50; i++)
            {
                if (Narray[i].GetStatus() == "Issued" && Narray[i].GetNewspaperUser() != "staff")
                {
                    Narray[i].displayNewspaper();
                    flag = 1;
                }
            }
            if (flag != 1)
            {
                cout << "Record Not found " << endl;
            }
        }
        else if (option == 3)
        {
            int flag = 0;
            for (int i = 0; i < 50; i++)
            {
                if (Marray[i].GetStatus() == "Issued" && Marray[i].GetMagzineUser() != "staff")
                {
                    Marray[i].displayagzine();
                    flag = 1;
                }
            }
            if (flag != 1)
            {
                cout << "Record Not found " << endl;
            }
        }
        else if (option == 4)
        {
            int flag = 0;
            for (int i = 0; i < 50; i++)
            {
                if (Jarray[i].GetStatus() == "Issued" && Jarray[i].GetJournelUser() != "staff")
                {
                    Jarray[i].displayJournel();
                    flag = 1;
                }
            }
            if (flag != 1)
            {
                cout << "Record Not found " << endl;
            }
        }
        else
        {
            cout << "Wrong Choice ! " << endl;
        }

        return 0;
    }
    // this is is the  return Book Function Which change the status of the issued status to
    // availabe so that it will not display in issued Documents

    int returnBook(string user, string Numb)
    {
        int option;
        cout << " 1)Book\t\t2)Newspaper\n 3)Magzine\t     4)Journel" << endl;
        cin >> option;
        if (option == 1)
        {
            system("cls");
            cout << "Books Issued By You : " << endl;

            while (1)
            {

                int flag = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Barray[i].GetBookUser() == user && Barray[i].GethiddenUser() == Numb)
                    {
                        cout << Barray[i].GetBookName() << endl;
                        flag = 1;
                    }
                }
                if (flag == 1)
                {

                    while (1)
                    {
                        int found = 0;
                        cin.sync();
                        cin.clear();
                        string BookName;
                        cout << "Enter Book Name : ";
                        getline(cin, BookName);
                        for (int i = 0; i < 50; i++)
                        {
                            if (BookName == Barray[i].GetBookName())
                            {
                                Barray[i].SetStatus("Available");
                                cout << "Successfully returned ! " << endl;
                                found = 1;
                                break;
                            }
                        }
                        if (found != 1)
                        {
                            cout << "You Entered Wrong Book Name ! " << endl;
                            int choice;
                            cout << "Press 1 to Try Again else To return Menu : ";
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
                            return 0;
                        }
                    }
                }
                else
                {
                    int choice;
                    cout << "Record Not found " << endl;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
            }
        }
        else if (option == 2)
        {
            system("cls");
            cout << "Newspaper Issued By You : " << endl;

            while (1)
            {

                int flag = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Narray[i].GetNewspaperUser() == user && Narray[i].GethiddenUser() == Numb)
                    {
                        cout << Narray[i].GetNewspaperName() << endl;
                        flag = 1;
                    }
                }
                if (flag == 1)
                {

                    while (1)
                    {
                        int found = 0;
                        cin.sync();
                        cin.clear();
                        string NewspaperName;
                        cout << "Enter Newspaper Name : ";
                        getline(cin, NewspaperName);
                        for (int i = 0; i < 50; i++)
                        {
                            if (NewspaperName == Narray[i].GetNewspaperName())
                            {
                                Narray[i].SetStatus("Available");
                                cout << "Successfully returned ! " << endl;
                                found = 1;
                                break;
                            }
                        }
                        if (found != 1)
                        {
                            cout << "You Entered Wrong Newspaper Name ! " << endl;
                            int choice;
                            cout << "Press 1 to Try Again else To return Menu : ";
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
                            return 0;
                        }
                    }
                }
                else
                {
                    int choice;
                    cout << "Record Not found " << endl;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
            }
        }
        else if (option == 3)
        {

            system("cls");
            cout << "Magzine Issued By You : " << endl;

            while (1)
            {

                int flag = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Marray[i].GetMagzineUser() == user && Marray[i].GethiddenUser() == Numb)
                    {
                        cout << Marray[i].GetMagzineName() << endl;
                        flag = 1;
                    }
                }
                if (flag == 1)
                {

                    while (1)
                    {
                        int found = 0;
                        cin.sync();
                        cin.clear();
                        string MagzineName;
                        cout << "Enter Magzine Name : ";
                        getline(cin, MagzineName);
                        for (int i = 0; i < 50; i++)
                        {
                            if (MagzineName == Marray[i].GetMagzineName())
                            {
                                Marray[i].SetStatus("Available");
                                cout << "Successfully returned ! " << endl;
                                found = 1;
                                break;
                            }
                        }
                        if (found != 1)
                        {
                            cout << "You Entered Wrong Magzine Name ! " << endl;
                            int choice;
                            cout << "Press 1 to Try Again else To return Menu : ";
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
                            return 0;
                        }
                    }
                }
                else
                {
                    int choice;
                    cout << "Record Not found " << endl;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
            }
        }
        else if (option == 4)
        {
            system("cls");
            cout << "Journel  Issued By You : " << endl;

            while (1)
            {

                int flag = 0;
                for (int i = 0; i < 50; i++)
                {

                    if (Jarray[i].GetJournelUser() == user && Jarray[i].GethiddenUser() == Numb)
                    {
                        cout << Jarray[i].GetJournelName() << endl;
                        flag = 1;
                    }
                }
                if (flag == 1)
                {

                    while (1)
                    {
                        int found = 0;
                        cin.sync();
                        cin.clear();
                        string JournelName;
                        cout << "Enter Journel Name : ";
                        getline(cin, JournelName);
                        for (int i = 0; i < 50; i++)
                        {
                            if (JournelName == Jarray[i].GetJournelName())
                            {
                                Jarray[i].SetStatus("Available");
                                cout << "Successfully returned ! " << endl;
                                found = 1;
                                break;
                            }
                        }
                        if (found != 1)
                        {
                            cout << "You Entered Wrong Journel Name ! " << endl;
                            int choice;
                            cout << "Press 1 to Try Again else To return Menu : ";
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
                            return 0;
                        }
                    }
                }
                else
                {
                    int choice;
                    cout << "Record Not found " << endl;
                    cout << "Press 1 to Try Again else To return Menu : ";
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
            }
        }
        else
        {
            cout << "Wrong Choice ! " << endl;
        }

        return 0;
    }
};