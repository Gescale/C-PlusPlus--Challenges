#include <iostream>
#include <string>
using namespace std;

int main()
{
	const float discountrate = 0.15;
	float price, discount, newprice, oldprice;

	cout <<"Enter the price: ";
	cin >> price;
	discount = price - (discountrate*price);

	if (price > 200)
		cout << "Was " << price;
		cout << "Now "

	else
	{
		cout << "Your price for the selected goods is: R"<< price;
		cout << " You could have had a 15% discount if you had spent R200 or more!";

	}

	return 0;
}
