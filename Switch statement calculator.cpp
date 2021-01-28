#include <iostream>
#include <string>


using namespace std;

int main()

{
	float value1, value2, answer;
	char operation;
	bool error;

	//Input 2 values and type of operation
	cout << "Enter first value " << endl;
	cin >> value1;
	cout << "Enter the second value " << endl;
	cin >> value2;
	cout << endl << "Which operation should be performed? " << endl;
	cout << "(A)ddition " << endl;
	cout << "(S)ubtraction " << endl;
	cout << "(M)ultiplication " << endl;
	cout << "(D)ivision " << endl;
	cout << "Type the first letter of the one you chose! " << endl;
	cin >> operation;

	//Do appropriate calculations
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

    //Output results
    if (!error)
		cout << "The answer is " << answer << endl;
	else
		cout << "Illegal operation! " << endl;

return 0;
}
