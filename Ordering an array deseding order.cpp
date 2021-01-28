/*simple but complicated way of organizing
random numbers in an array
The while loop checks for the position it should be placed
The for loop with a j moves other values upwards
The for loop with i makes sure we run for the exactly specified time
I is sometimes used to track how many numbers are there in the array*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

double average(double oneP, double twoP)
{
    return (oneP+twoP)/2;
}

int main ( )
{
    const int NUM_VALS =15;
    int values[NUM_VALS];
    int nextVal;
    int current;

    srand(time(0));
    for (int i=0; i < NUM_VALS; i++)
    {
        nextVal = rand( ) % 1000;
        cout << "Next value check: " << nextVal << endl;
        current = 0;

        while(current < i && nextVal >= values[current])
        {
            current++;
            cout << "Current counter: " << current << endl;
        }

        for(int j =i; j > current; j--)
            values[j] = values[j-1];
        values[current] = nextVal;
    }

    cout << "The values are: " << endl;
    for(int i = 0; i < NUM_VALS; i++)
        cout << values[i] << endl;

    return 0;
}
