#include <iostream>
using namespace std;

void calcAverge(float & average, float mark1P, float mark2P, float mark3P)
{
    average = (mark1P+mark2P+mark3P)/3;
}
    int main()
    {
        float mark=0, mark1=0, mark2=0, mark3=0, average=0;
        int counter=0;

        do{

            cout << "Enter mark" << endl;
            cin >> mark;
            counter++;

        if(counter ==1)
        {
            mark1 = mark;
        }
        else
            if(counter == 2)
                {
                    mark2 = mark;
                }
            else{
                mark3 = mark;

            }
        }while(counter < 3);
       calcAverge(average, mark1, mark2, mark3);
       cout << "The average is: " << average << endl;

	return 0;
}
