#include <iostream>
#include <string>


using namespace std;

int main()
{
	int dogno, score, totalscore;

	cout << "Dog show "<< endl << endl;
	cout << "Enter the first dog number: ";
	cin >> dogno;

	while(dogno != 0)
	{
		totalscore = 0;
		cout << "Enter the 10 scores of the dog number " << dogno <<endl;
		for(int i = 1; i <=10; i++)
		{
			cin >> score;
			totalscore += score;
		}
		cout << "Dog no " << dogno << " scored " << totalscore << endl << endl;

		cout << "Enter the next dog number(0 to stop: ";
		cin >> dogno;
	}

return 0;
}
