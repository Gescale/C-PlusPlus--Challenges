#include<iostream>
#include<cstring>

using namespace std;

class LilDict
{
private:
    int value;
    string name;

public:
    LilDict(string string1, int value1)
    //string set to provide name
    //value set to provided value
    :value(value1)
    {
        name = string1;
    }

    friend ostream& operator <<(ostream& outs, const LilDict& test)
    //outputs the little dictionary as name and value(name : 20)
    //outputs to both file and cout
    {
        outs << test.name << " : " << test.value;
        return outs;
    }
};
