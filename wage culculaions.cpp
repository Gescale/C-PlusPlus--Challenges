#include <iostream>
#include <string>

using namespace std;

int main()

{
	int start, finish, payment, evewage, mrnwage, wage;
	const float  mrngrate=32.50, everate=44.0;

	cout << "Enter starting time: " << endl;
	cin >> start;

	cout << "Enter finishing time: " << endl;
	cin >> finish;

	cout << "WAGE CALCULATION" << endl;
	cout << "				  " << endl;
	cout << "================" << endl;
	cout << "				  " << endl;
	cout << "starting time: " << start << endl;
	cout << "Finishing time " << finish << endl;

	if (start<6)
        if (finish<=6)
			wage=(finish - start)*mrngrate;
		else
				wage=(6-start) * mrngrate+(finish-6)*everate;
	else wage=(finish-start)*everate;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The payment is: R" << wage << endl;

return 0;
}
