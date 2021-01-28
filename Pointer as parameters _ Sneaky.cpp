//Program to demonstrate the way call-by-value parameters
//behave with pointer arguments.
#include <iostream>
using namespace std;

typedef int* IntPointer;

void sneaky(const IntPointer temp);

 int main( )
 {
 IntPointer p;

 p = new int;
 *p = 77;
 cout << "Before call to function *p == "
 << *p << endl;
 sneaky(p);
 cout << "After call to function *p == "
 << *p << endl;

 return 0;
 }

 void sneaky(const IntPointer temp)
 {
 *temp = 91111;
 cout << "Inside function call *temp == "
 << *temp << endl;
}
