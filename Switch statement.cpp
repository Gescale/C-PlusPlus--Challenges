#include <iostream>
#include <string>

using namespace std;

int main ()

{
	float value1, value2, answer;
	char operation;
	bool error;

	//Input two values and the type of operation
	cout << "Enter the first value: ";
	cin >> value1;
	cout << "Enter  the second value: ";
	cin >> value2;

	cout << endl << "Which operation should be performed? " << endl;
	cout << " (A)ddition" << endl;
	cout << " (S)ubtraction" << endl;
	cout << " (M)ultiplication" << endl;
	cout << " (D)ivision" << endl;
	cout << " Type the fisrt letter of the one you choose: " << endl;
	cin >> operation;

	//Do appropriate calculation
	error = false;
	switch (operation)
	{
	case 'a':
	case 'A':
		answer = value1 + value2;
		break;
	case 's':
	case 'S':
		answer = value1 - value2;
		break;
	case 'm':
	case 'M':
		answer = value1 * value2;
		break;
	case 'd':
	case 'D':
		answer = value1 / value2;
		break;
	default:

	error = true;
	}

	if (!error)
		cout << "The answer is: " << answer << endl;
	else
		cout << "Illegal operation!" << endl;

	return 0;
}

