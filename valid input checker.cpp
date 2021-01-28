#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()

{
	int x;

	cout << "Enter a number greater than 5 but less than 20" << endl;
	cin >> x;

	if(x != 0){
		while(x<5 || x>20){
		cout << "Invalid input!"  << endl;
		cout << "Please enter a valid number!" << endl;
		cin >> x;
		}
		}

	cout << "Thank you!" << endl;

	return 0;
}

