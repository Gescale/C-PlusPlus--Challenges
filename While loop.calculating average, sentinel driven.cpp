#include <iostream>
#include <string>


using namespace std;

int main()
{
	int value, sum, many;
	float average;
	sum =0;
	many =0;

	cout << "Enter a list of numbers (Ctrl+D) to end " << endl;
	while (cin >> value)
	{
		sum += value;
		many++;
		cout << "The sum so far is " << sum << endl;
	}

	average = float(sum)/many;
	cout << "The average of "<< many <<" numbers entered is " << average << endl;

return 0;
}
