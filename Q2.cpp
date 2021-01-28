#include <iostream>
#include <string>

using namespace std;

int main()

{
	int next =1, sum =0;

	while (next<=4)
	{
		next++;
		sum = sum + next;
	}
	cout << "The sum of 2 through 5 is: " << sum << endl;

	return 0;
}
