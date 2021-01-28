#include <iostream>
using namespace std;

const int N=4, M=5;

void displayORG(int my4by4P[N][N])
{
    cout << '\t' << "ROW1" << '\t' << "ROW2" << '\t' << "ROW3" << '\t' << "ROW4" << '\t' << endl;

    for(int i=0; i < N; i++)
    {
        cout << "Column: " << i+1<< "| ";
        for(int j=0; j< N; j++)
        {
            cout << my4by4P[i][j] << '\t';
        }
        cout << endl;
    }
}

void transpose(int my4by4P[M][N])
{
    for(int i=0; i < N-1; i++)
    {
        for(int j=i+1; j< N; j++)
        {
            swap(my4by4P[i][j], my4by4P[j][i]);
        }
    }
}

int main( )
{

    int my4by4[N][N]{{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    cout << "Before transposing " << endl;
    displayORG(my4by4);

    transpose(my4by4);

    cout << "After transposing " << endl;
    displayORG(my4by4);

    return 0;
}
