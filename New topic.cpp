#include <iostream>
#include <string>

using namespace std;

int main()

{
	int payment;
	int x = 500;
	int y = 250;

	cout << "x is 0: " << x << endl;
	cout << "y is 0: " << y << endl;
	{
		if (x > y){
			return x + y;
			cout << "x is 1: " << x << endl;
			cout << "y is 1: " << y << endl;
	}
		else{
			return x - y;
			cout << "x is 2: " << x << endl;
			cout << "y is 2: " << y << endl;
			}
	}
	cout << "x is 3: " << x << endl;
	cout << "y is 3: " << y << endl;
		return 0;
}
