#include <iostream>
#include <string>
using namespace std;
const int actornumber = 5;

struct Movie
{
    string actor[actornumber];
    string title;
    string director;
    int year;
};

void inputData(Movie & movieP)
{
    cout << "Please enter Movie Title: ";
    cin >> movieP.title;
    cout << "Enter Director: ";
    cin >> movieP.director;
    cout << "Enter Year: ";
    cin >> movieP.year;
    for(int i = 0; i < actornumber; i++)
    {
        cout << "Enter : Actors ";
        cin >> movieP.actor[i];
    }

}

void displayData(Movie & movieP)
{
    cout << '\t' << "The Movie Details.\n";
    cout << endl;
    cout << "Title " << movieP.title << endl;
    cout << "Year " << movieP.year << endl;
    cout << "Director " << movieP.director << endl;
    cout << "The Actors are: \n";

     for(int i = 0; i < actornumber; i++)
        {
           cout << '\t' << movieP.actor[i];
        }
        cout << endl;
}

bool directorIsActor(Movie & movieP)
{
    for(int i = 0; i < actornumber; i++)
    {
        if((movieP.director) == (movieP.actor[i]))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Movie movie1;

    inputData(movie1);
    displayData(movie1);

    if(directorIsActor(movie1))
    {
        cout << "The director is an Actor.\n";
    }

    else
        cout << "The director is not an Actor.\n";

return 0;
}
