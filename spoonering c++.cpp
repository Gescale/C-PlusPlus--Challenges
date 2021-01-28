#include <iostream>
#include <string>
using namespace std;

int main()
{
	int salary;
	float vat_payable, higher, lower;
	const float taxrate1 =  0.30;
	const float taxrate2 = 0.40;


	cout << "Enter your anual salary: ";
	cin >> salary;

	if (salary > 70000.00)
			cout << "The tax payable is: " << salary * taxrate1 << " .";
	else
			cout << "The tax payable is: " << salary * taxrate2 << endl;

	return 0;
}
