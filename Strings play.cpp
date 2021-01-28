#include <iostream>
#include <string>


using namespace std;

int main()

{
	char age;
	string makore;
	string name, surname, tittle, description, PersonalInfo, all;

	cout << "Enter age " << endl;
	cin >> age;

	cin.get();
	cout << "Enter the name " << endl;
	cin.get();
	getline(cin, name, '\n');
	cout << "Enter the tittle" << endl;
	cin >> tittle;
	cout << "Enter the surname" << endl;
	cin >> surname;
	cin.get();
	cout << "Enter the description" << endl;
	getline(cin, description, '\n');

	PersonalInfo = tittle + ", " + name + ", " + surname;
	cout << "==================================" << endl;
	cout << "Documentation for: " << PersonalInfo << endl;
	cout << "==================================" << endl << endl;
	cout << description << endl;

return 0;
}
