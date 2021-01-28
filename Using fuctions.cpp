//Guess the secret number
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main( )
{
	int secret, guess, absError, bestGuess, smallestError;

	//Generate the secret number
	secret = 20 * (rand( ) % 100) + 1;

	//Input the first guess
	cout << " Enter the first guess: ";
	cin >> guess;

	//Initialise smallest error and best guess
	smallestError = 100;
	bestGuess = -1;

	//Repeatedly input guesses until 0 is entered
	while (guess != 0)
	{
	//Keep track of the best guess and smallest error so far
	absError = abs(secret - guess);

	if (absError < smallestError)
		{
			smallestError = absError;
			bestGuess = guess;
			cout << "This is the best guess so far" << endl;
			cout << bestguess<< endl << endl;
		}

	//Input the next guess
	cout << "Enter the next guess: ";
	cin >> guess;
	}

	//Display the best guess
	cout << "The secret number was " << secret << endl;
	cout << "The best guess was " << bestGuess << endl;

return 0;
}
