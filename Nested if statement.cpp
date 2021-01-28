//boolean
#include <iostream>
#include <string>

using namespace std;

int main()

{
	int numpos, numneg, numzero, number;

	cout << "Enter a number! : " << endl;
	cin >> number;

	if (number == 0)
		numzero++;
	if (number > 0)
		numpos++;
	if (number < 0)
		numneg++;

	cout << numpos << " Positive numbers entered!" << endl;
	cout << numneg << " Negetive numbers entered!" << endl;
	cout << numzero << " Zeros entered!" << endl;

	return 0;
}
