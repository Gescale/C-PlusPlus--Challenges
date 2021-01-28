#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
	int randomNumber, guess=0, reserve=0, highscore=0;

	cout << "Enter a number below the number 100 and above 0" << endl<< endl;
	cin >> guess;

	while(guess !=0)
	{
		srand(time(0));
		randomNumber = 1 + rand() % 100;

		reserve = randomNumber - guess;
		reserve = abs(reserve);
		cout << "reserve" << reserve <<endl;

		if(reserve <= highscore)
		{
			if(reserve==highscore)
			{
				cout << "Congratulations, you are the winner!" <<endl;
			}
			else
				cout << "This is the closest so far!" << endl;

			highscore = reserve;
		}
		else
			cout << "Try harder!" << endl;

		cout << "Enter a number lower than 100 and greater than 1" << endl;
		cout << "--------------- Enter 0 to stop ----------------" << endl;
		cin >> guess;
	}
return 0;
}
