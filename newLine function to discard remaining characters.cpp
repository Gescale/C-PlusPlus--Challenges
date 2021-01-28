#include <iostream>
#include <fstream>

 using namespace std;

//Uses iostream:
void newLine( )
{
    char symbol;
    do
    {
        cin.get(symbol);
    } while (symbol != '\n');
}

//Uses iostream:
void getInt(int& number)
{
    char ans;
    do
    {
        cout << "Enter input number: ";
        cin >> number;
        cout << "You entered " << number
        << ". Is that correct? (yes/no): ";
        cin >> ans;
        newLine( );
    } while ((ans != 'Y') && (ans != 'y'));
}

 int main( )
 {
    int n;

    getInt(n);
    cout << "Final value read in = " << n << endl
    << "End of demonstration.\n";
    return 0;
 }
