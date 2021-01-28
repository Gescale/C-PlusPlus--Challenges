#include <iostream>
#include <string>
using namespace std;

const int row = 4, collum = 5;
void displaySeats(char seatingP[][collum]);
//the array displays the seating at the moment
//shows occupied and unoccupied seats in a theater

void bookSeats(char seatingP[][collum]);
//changes seats from R to B, reserved to booked
//Allows user to select seats of their choice
//takes in user input on seats of choice and provide info if they are occupied or free for taking

bool checkAvailable(char seatingP[][collum], int startChoiceP, int rowchoiceP, int manyP);

void newLine( );


int main( )
{
    char Seating[row][collum] = {{'A','A','A','A','A'}, {'A','A','A','A','A'},
                                {'A','A','A','A','A'}, {'A','A','A','A','A'}};
    char answer;
    do{
        displaySeats(Seating);
        bookSeats(Seating);
        cout << endl;
        displaySeats(Seating);

    cout << endl << endl;
    cout << "Do you want to buy tickets again! (YES or NO) :";
    newLine();
    cin >> answer;
    cout << endl << endl;
    newLine();
    }while(tolower(answer) == 'y');



return 0;
}

void displaySeats(char seatingP[][collum])
{
    cout << '\t' << "*******************" << endl;
    cout << '\t' << "The Theater Seating" << endl;
    cout << '\t' << "*******************" << endl;
    cout << '\t' << "R is Reserved and A is Available.\n";
    cout << "*****************************************\n";
    cout << "Collum|" << '\t' << '1' << '\t' << '2' << '\t';
    cout << '3' << '\t' << '4' << '\t' << '5' << endl;
    cout << "_________________________________________\n";
    for(int i = 0; i < row; i++)
    {
        char rowChar = 'A'+i;
        cout << "Row " << rowChar << '|' << '\t';
        for(int j = 0; j < collum; j++)
        {
            cout << seatingP[i][j];
            cout << '\t';
        }
        cout << endl;
        cout << "_________________________________________\n";
    }
}

void bookSeats(char seatingP[][collum])
{
    int availableSeats[row][2];
    int available = 0;
    char choice;
    int many=0, startChoice=0, rowChoice=0;
    cout << "Please enter the Row of your choice: \n";
    cin >> choice;
    cout << "How many seats would you like to take?\n";
    cin >> many;
    cout << "Starting from which number: \n";
    cin >> startChoice;

    switch(choice)
    {
        case 'A':
        case 'a':
            rowChoice = 0;
            break;
        case 'B':
        case 'b':
            rowChoice = 1;
            break;
        case 'C':
        case 'c':
            rowChoice = 2;
            break;
        case 'D':
        case 'd':
            rowChoice = 3;
            break;
        default:
            cout << "You have entered wrong input, please try again.\n";
    }

    startChoice = startChoice-1;
    if(checkAvailable(seatingP, startChoice, rowChoice, many))
    {
       for(int i = startChoice; i < (startChoice + many); i++)
        {
            seatingP[rowChoice][i] = 'R';
        }
        cout << "Your " << many << " tickets have been processed! \n";
        cout << "Please check and confirm below! \n";
    }

    else
        cout << "Some or all of the seats you have chosen are occupied! \n";
}

bool checkAvailable(char seatingP[][collum], int startChoiceP, int rowchoiceP, int manyP)
{
    int counter = 0;
    for(int i = startChoiceP; i < (startChoiceP+manyP); i++)
        {
            if(((startChoiceP + manyP) <= collum) && (seatingP[rowchoiceP][startChoiceP] == 'A'))
            {
                counter++;
            }
        }
    if(counter == manyP)
        return true;
    else
        return false;
}

void newLine( )
{
    char symbol;
    do
    {
        cin.get(symbol);
    } while (symbol != '\n');
}
