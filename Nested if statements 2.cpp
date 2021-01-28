#include <iostream>
#include <string>
using namespace std;

int main()

{
	const float AFTERNOON_RATE = 32.50;
	const float EVENING_RATE = 44.00;
	int start, finish;
	float wage;

	cout << "Wage calculation" << endl;
	cout << "================" << endl;
	cout << "Starting time: ";
	cin >> start;
	cout << "Finishing time: ";
	cin >> finish;

	if (start <6)
		if (finish <=6)
		wage = (finish - start) * AFTERNOON_RATE;
		else
			wage = (6 - start) * AFTERNOON_RATE + (finish - 6) * EVENING_RATE;
		else
			wage = (finish - start) * EVENING_RATE;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Thte payment is R : " << wage << endl;

	return 0;
}
