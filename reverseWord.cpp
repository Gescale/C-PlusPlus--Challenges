#include <iostream>
using namespace std;

string reverseWords(string word)
    {
        string tempString;
        for (int i = word.size(); i >= 0; i--)
        {
            tempString += word[i];
        }
        return tempString;
    }

int main()
{
    string theWords = "reverseThisWord";
    cout << reverseWords(theWords) << endl;

    return 0;
}
