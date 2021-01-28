#ifndef PERSONINFO_H_INCLUDED
#define PERSONINFO_H_INCLUDED
#include <iostream>
using namespace std;

class PersonInfo
{
public:
    void print_details();
    void SetDetails (string fname, string lname, int fage , char agender);

private:
    int age;
    char gender;
    string  account_holder_name;
    string  account_surname;
};

#endif // PERSONINFO_H_INCLUDED
