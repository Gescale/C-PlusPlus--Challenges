#include <iostream>
#include "PersonInfo.h"

using namespace std;

class Account
{
    private:
       string Name;
       double  Balance;
    public:
        void SetDetails (string description, double amount);
        void GetDetails ();
};
int main()
{
    Account MyAccount;
    PersonInfo MyPerson;
    string tname;
    string lname;
    string fname;
    int fage;
    char fgender;
    double tbalance;
    cout << "-----------------------Let us manage your account--------------------------" << endl;
    cout << "Enter the Account name :" << endl;
    cin >> tname;
    cout << "Enter Initial Account balance :" <<endl;
    cin >> tbalance;

    MyAccount.SetDetails(tname , tbalance);
    MyAccount.GetDetails();

    cout << "Please enter the account holders first name : " << endl;
    cin >> fname;
    cout << "Please enter the account holders last name : " << endl;
    cin >> lname;
    cout << "Please enter the account holders age : " << endl;
    cin >> fage;
    cout << "Please enter the account holders gender ( M or F ) : " << endl;
    cin >> fgender;

//    MyPerson.SetDetails(fname, lname, fage, fgender);
    cout << "Here the Details is printed by the cpp file" <<endl;
    cout <<endl;
MyPerson.print_details();

    return 0;
}

void Account::SetDetails (string description, double amount)
{
    Name = description;
    Balance = amount;
    cout << "The account was updated successfully" <<endl;
    }

    void Account::GetDetails ()
{
    cout << "--------------------------------------------------------------------------" <<endl;
     cout << "The account name is " << Name << endl;
     cout << "The account balance is: " << Balance <<endl;
     cout << "--------------------------------------------------------------------------" <<endl;

    }

