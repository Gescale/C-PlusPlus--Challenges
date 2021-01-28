#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

float BiggestNumber(float x, float y, float z)
{
    if(x>=y && x>=z)
			return x;
	else
		if(y>z && y>x)
			return y;
		else
			return z;
}

int main()
{
	float a, b, cr;

	cout << "Enter three numbers: " << endl;
	cin >> a >> b >> cr;

	cout << "The biggest number is "<< BiggestNumber(a, b, cr) <<endl;

return 0;
}
