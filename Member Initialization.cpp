#include <iostream>
#include <string>
using namespace std;

class Coordinate
    {
    public:
    Coordinate();
    Coordinate(int x);
    Coordinate(int x, int y);
    int getX();
        int getY();
    private:
    int x=1;
    int y=2;
    };

int main ( )
{
    Coordinate c1, c2(9, 10);
    cout << c1.getX() << " " << c1.getY() << endl; // Outputs
    cout << c2.getX() << " " << c2.getY() << endl; // Outputs

 return 0;
}
    Coordinate::Coordinate()
    { }

    Coordinate::Coordinate(int yVal) : y(yVal)
    { }

    Coordinate::Coordinate(int xVal, int yVal) : x(xVal), y(yVal)
    { }

    int Coordinate::getX()
    {
        return x;
    }

    int Coordinate::getY()
    {
        return y;
    }
