//Squared numbers
#include <iostream>
#include <cmath>
using namespace std;

void calcSquare1(int x, int y)
{
	y = x * x;
}
void calcSquare2(int x, int & y)
{
	y = x * x;
}
void calcSquare3(int & x, int & y)
{
	y = x * x;
}


int main()
{
	int x, y, calcS1, calcS2, calcS3, calcS4, calcS5;
	cout << "Enter a number: ";
	cin >> x;
	calcSquare1(x, y);
	calcSquare2(x, y);
	calcSquare3(y, x);
	calcSquare2(y, x);
	calcSquare1(x, y);
0
	cout << "x = " << x << ", y = " << y << endl;
	return 0;
}
