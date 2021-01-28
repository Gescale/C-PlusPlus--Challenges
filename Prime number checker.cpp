#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()

{
	double prime, remainder2, remainder3;
	int number;

	cout << "Enter number!: " <<  endl;
	cin >> number;

	remainder2 = number % 2;
	remainder3 = number % 3;
	prime = remainder2 + remainder3;
	cout << "Prime number sample " << prime << endl;

	if(prime == 0)
		cout << "This number is not a prime number!" << endl;
	else
		if(prime > 0){
		cout << "The number " << number << " is a prime number!" << endl;
		}

	return 0;
}
