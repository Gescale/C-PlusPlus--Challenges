// Noise levels of cars
#include <iostream>
using namespace std;

const int rows=4;
const int collumn=4;

void displayORG(int my4by4P[][collumn])
{
    cout << '\t' << " THE ORIGINAL!" << endl;
    cout << '\t' << " -------------" << endl;
    cout << '\t' << "ROW1" << '\t' << "ROW2" << '\t' << "ROW3" << '\t' << "ROW4" << '\t' << endl;


    for(int i=0; i < rows; i++)
    {
        cout << "RowP: " << i+1<< "| ";
        for(int j=0; j< collumn; j++)
        {
            cout << my4by4P[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

void displayTrans(int my4by4P[][collumn])
{
    cout << '\t' << " TRANSPOSED" << endl;
    cout << '\t' << " ----------" << endl;
    cout << '\t' << "ROW1" << '\t' << "ROW2" << '\t' << "ROW3" << '\t' << "ROW4" << '\t' << endl;


    for(int i=0; i < rows; i++)
    {
        cout << "RowP: " << i+1<< "| ";
        for(int j=0; j< collumn; j++)
        {
            cout << my4by4P[j][i] << '\t';
        }
        cout << endl;
    }
}

int main( )
{

    int my4by4[rows][collumn]{{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    displayORG(my4by4);
    displayTrans(my4by4);

    return 0;
}
