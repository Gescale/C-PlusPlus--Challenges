#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int smallest, largest, value, range;

    //smallest value input
    cout << "Enter the smallest value: ";
    cin >> smallest;
    while (smallest <0 || smallest >1000)
    {   cout << "The smallest value should not be less than 0, or greater than 1000" <<endl ;
        cout << "Enter the smallest value: ";
        cin >> smallest;
    }

        //largest value input
    cout << "Enter the largest value: ";
    cin >> largest;
    while (largest > 1000 || largest<0)
    {
        cout << "The largest value should not be greater than 1000 or less than 0!" <<endl;
        cout << "Enter the largest value: ";
        cin >> largest;
    }
    range = largest - smallest;
    cout << "The range is "  << range << " !";

    return 0;
}
