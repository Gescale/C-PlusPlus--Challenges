#include <iostream>

int main()
    {
        using namespace std;
        char greet[] = "Hi Jack!";
        int index = 0;

        while(greet[index] != '\0')
        {
            if(greet[index] == ' ')
            {

            }
            else
                greet[index] = 'X';
                index++;

        }
        index = 0;
        while(greet[index] != '\0')
        {
            cout << greet[index];
            index++;
        }

    return 0;
}


