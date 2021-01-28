#ifndef LILDICT_H
#define LILDICT_H
using namespace std;

class LilDict
{
private:
    int value;
    string name;

public:
    LilDict() :value(0), name("Unknown") {}
    //string set to provide name
    //value set to provided value

    LilDict(string string1, int value1)
    //string set to provide name
    //value set to provided value
    :value(value1)
    {
        name = string1;
    }

    friend ostream& operator <<(std::ostream& outs, const LilDict& test)
    {
        outs << test.name << " : " << test.value;
        return outs;
    }
};
#endif // LILDICT
