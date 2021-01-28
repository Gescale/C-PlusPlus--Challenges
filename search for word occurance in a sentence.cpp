#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, word;
    int count, position;

    cout << "Enter a sentence: ";
    getline(cin, sentence, '\n');

    cout << "Enter a word to search: ";
    cin >> word;

    count = 0;
    position = sentence.find(word);
    while(position != -1)
    {
        count++;
        position = sentence.find(word, position+1);
    }
    cout << "The word "<< word<< " occurs " << count << " times in the sentence!.\n";

}
