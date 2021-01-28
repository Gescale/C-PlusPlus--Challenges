#ifndef DICT_H
#define DICT_H
#include <string>

class dict
{
public:
    dict():name("unset"), number(0){};

    dict(const string passedName);

    dict(const int passedNumber);

    dict(const string passedName, const int passedNumber);

    ~dict();

    void print();

    return int add(const int number1, const int number2) const;

private:
    string name;
    int number;
};

#endif // DICT_H
