#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

//Input marks
void inputMarks(float & mark1P, float & mark2P, float & mark3P)
{
	cout << "Enter three marks: ";
	cin >> mark1P;
	cin >> mark2P;
	cin >> mark3P;
}

//average calculation
float averageCalcu(float mark1P, float mark2P, float mark3P, float average)
{
	return average = (mark1P + mark2P + mark3P)/3;
}

//Calculate the best
void displayBest(float averageAP, float averageBP)
{
	float best = averageAP;
	if(averageBP > averageAP)
	{
		best = averageBP;
	}

	cout << "The best average is " << best << endl;
}

int main()
{
	float mark1, mark2, mark3;
	float averageA, averageB, average;

	inputMarks(mark1, mark2, mark3);
	averageCalcu(mark1, mark2, mark3, average);

	inputMarks(mark1, mark2, mark3);
	averageCalcu(mark1, mark2, mark3, average);

	displayBest(averageA, averageB);

	return 0;
}
