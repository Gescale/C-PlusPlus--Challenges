#include <iostream>
#include <string>


using namespace std;

int main()
{
	int population =0, percent =0, year =0;

	//Input year and current population
	cout << "Input the current population " << endl;
	cin >> population;
	cout << "Input the current year! " << endl;
	cin >> year;

	//The controlling while loop
	while(population <= 10000000)
	{
		percent = population/10;
		population += percent;
		year++;

		cout << "In the year " << year;
		cout << "the population will be at " << population << endl;
	}
	cout << "The population will reach " << population;
	cout << "in the year " << year << endl;

return 0;
}
