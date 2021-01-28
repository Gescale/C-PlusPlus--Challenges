#include "PersonInfo.h"

#include <iostream>
using namespace std;

void PersonInfo::print_details()
{
    cout << "--------------------------------------------------------------------------" <<endl;
    cout << "The Account Holders Name is : " << account_holder_name <<" " << account_surname<< endl;
    cout <<"The account holder is " << age << " years old " << endl;
    if (gender == 'F')
        cout<< "The account holder is female" <<endl;
    else
        cout<< "The account holder is male"<<endl;
    cout << "--------------------------------------------------------------------------"<<endl;
}

void PersonInfo::SetDetails (string fname, string lname, int fage , char agender)
{
    account_holder_name = fname;
    account_surname = lname;
    age = fage;
    gender = agender;
}
