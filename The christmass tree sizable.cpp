#include <iostream>
#include <string>
using namespace std;

midCalc(int midN)
{
    int sol = midN/2;
    int tempSol = midN%2;
    if(tempSol != 0)
    {
         return(sol + 0.5);
    }

    else
        return sol;
}

void displayTree(int siz)
{
    int midNo = midCalc(siz);
    for(int j=midNo; j >= 0; j--)
    {
        for(int y=0; y < j; y++)
        {
            cout << " ";
        }

        int real = (midNo-j-1)+(midNo-j);
        for(int z=0; z<(real); z++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i <= 2; i++)
    {
        for(int x=0; x < midNo-1; x++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

}

int main ( )
{
    int t=55;
    int sizz;
    cout << "Please enter size : ";
    cin >> sizz;
    cout << endl;
    while(t != 0)
    {
        t--;
        displayTree(sizz);
    }

    return 0;
}
