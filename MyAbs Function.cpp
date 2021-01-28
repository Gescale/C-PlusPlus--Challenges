#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int myAbs(int x)
{
	if(x<0)
		return -x;

	else
		return x;
}

int main()
{
	int i;
	cout << "Please enter a number : " << endl;
	cin >> i;

	while(i!=0)
		{
			cout << "I is : " << myAbs(i) << endl;
			cin >> i;
		}

return 0;
}
