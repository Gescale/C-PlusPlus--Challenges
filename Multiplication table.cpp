#include <iostream>
#include <string>


using namespace std;

int main()
{
    int invalue = 0, answer = 0;

    for(int g = 0; g <= 10; g++)
	{
		answer++;
		invalue = answer;
		for(int i = 0; i <= 10; i++)
		{
			cout << invalue;
			cout << " ";
			invalue += answer;
		}
		cout << endl;
	}

return 0;
}
