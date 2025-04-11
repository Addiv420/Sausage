#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	system("clear");

	double currentBalance{};
	unsigned int
	 gramm{};
	double sausagePrice = 0.05;
	double price{};
	double newBalance{};
	bool paying = false;

	cout << "Your balance (€): ";
	cin >> currentBalance;
	cout << "How much sausage would you like? (gramm): ";
	cin >> gramm;

	system("clear");
	
	price = gramm * sausagePrice;
	newBalance = currentBalance - price;

	cout << "That would be " << price << "€" << endl << endl;

	cout << "Pay	[1]" << endl << "Not pay	[0]" << endl
		<< "Input: ";
	cin >> paying;

	system("clear");

	if (paying == true) {
		if (newBalance <= 0) {
			cout << "Well done! You don't have enough money, now you have a debt of " << newBalance << "€ at the locale butcher :)" << endl;
		} else {
			cout << "Your new Balance is: " << newBalance << "€" << endl;
		}
	}

	else if (paying == false){
		cout << "Transaction failed." << endl;
	}

	return 0;
}
