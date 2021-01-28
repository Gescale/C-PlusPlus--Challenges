#include <iostream>
#include <string>
using namespace std;


int main() {

    const int ROWS = 4;
    const int COLS = 3;
    char array[ROWS][COLS] = {{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},};

    cout << "Display data Row by Row" << endl;
    for(int i=0;i < ROWS;i++)
    {

        for(int j=0;j < COLS;j++)
        {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    cout << "Display data Column by Column" << endl; // just put the column loop on the outside

    for(int j=0;j < COLS;j++)
    {

        for(int i=0;i < ROWS;i++) // row loop on the inside
        {
            cout << array[i][j] << ' '; // this stay the same
        }
        cout << endl;
    }


    return 0;
}