include "DICT.H"
#include<iostream>
#include <string>
using namespace std;


    dict::dict(const string passedName)
    :name(passedName), number(0)
    {}

    dict::dict(const int passedNumber)
    :name("Anonymous") ,number(passedNumber){}

    dict::dict(const string passedName, const int passedNumber)
    :name(passedName), number(passedNumber){}

    dict::~dict()
    {
        cout << "destroyed" << endl;
    }

    dict::print()
    {
        cout << name << " : " << number;
    }

    dict::add(const dict dict1, const dict dict2) const
    {
        return << dict1.name + " & " + dict2.name << dict1.number+dict2.number;
    }
