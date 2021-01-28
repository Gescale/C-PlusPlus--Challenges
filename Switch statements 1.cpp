#include <iostream>
#include <string>

using namespace std;

int main()

{
	int selection, tickNum, slip;

	cout << " Please enter the choice of the ticket " << endl;
	cout << " (a number from 1 to 4 or 0 to quit) " << endl;
	cout << " TICKET MENU " << endl << endl;
	cout << " 1 : Exclusive VIP area A		R3000" << endl;
	cout << " 2 : VIP Area B				R2000" << endl;
	cout << " 3 : Elevated area				R1200" << endl;
	cout << " 4 : General area				R600 " << endl;
	cout << " 0 : Quit " << endl;
	cin >> selection;
	cin.get();
	cout << "How many tickets would you like to purchase? " << endl;
	cin >> tickNum;

	while (selection !=0){

	switch(selection)
{
	case 1:
		cout << "Your total amount is: " << tickNum*3000 << endl;
		break;
	case 2:
		cout << "Your total amount is: " << tickNum*2000 << endl;
		break;
	case 3:
		cout << "Your total amount is: " << tickNum*1200 << endl;
		break;
	case 4:
		cout << "Your total amount is: " << tickNum*600 << endl;
		break;
	default:
		cout << "Invalid choie - Please re-Enter! " << endl;
    	cin >> selection;
}

	return 0;
}
}

