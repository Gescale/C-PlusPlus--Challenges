#include <iostream>
#include <string>
#include <vector>
using namespace std;

void inputVector(int vectoria[])
{
    cout << "Enter the marks: \n";
    int next = 0;
    do{
        cin >> next;
        vectoria.push_back(next);
    }while(next > 0);
}

void outputVector(int vectoria[])
{
    cout << '\t' << "The marks are: \n";
    for(unsigned int i = 0; i < vectoria.size( ); i++)
    {
        cout << vectoria[i] << endl;
    }
}

int main()
{
    vector<int> vectoria;

    inputVector(vectoria);
    outputVector(vectoria);

    return 0;
}
