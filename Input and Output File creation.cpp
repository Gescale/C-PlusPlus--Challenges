//input and output files testing
#include <iostream>
#include <fstream>
#include <cctype>
#include <ctype.h>
using namespace std;

int main ( )
{
    ifstream instream;
    ofstream outstream;
    char next = 0;
    char input = 0;

    //declares input and output file and checks if they are successfully opened
    instream.open("test.txt");
    if(instream.fail())
    {
        cout << "The input file failed to open. \n";
    }

    outstream.open("test1.txt");
    if(outstream.fail())
    {
        cout << "The output file failed to open. \n";
    }

    cout << "Enter a negetive number when you are done. \n";
    cout << "Please input the number of your choice : ";
    cin.get(next);

    do
    {
        outstream.put(next);
        cout << "Enter again : ";
        cin.get(next);
        cout << endl;
    }while(next == 0);

    while(!instream.eof())
    {
        instream.get(input);
        cout << input;
    }


    instream.close();
    outstream.close();
    return 0;
}
