#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
	int guess = 0, randomNumber = 0;

	cout << "Enter a number!: " << endl;
	cin  >> guess;

	while(guess != randomNumber)
	{
		//create a random number
		srand(time(0));
		randomNumber = 1 + rand() % 30;

		//compare numbers
		if(guess == randomNumber)
			{
				cout << "Congrats you have won!" << endl;
			}
		else
			{
				cout << "The random Number is: " << randomNumber << endl;
				cout << "Try again" << endl;
				cout << "Re-enter the number!: ";
				cin >> guess;
			}
	}
	return 0;
}
