#pragma once
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
    std::ostream& operator <<(std::ostream& outs, const LilDict& test);
};



