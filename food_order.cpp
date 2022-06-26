#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;


// simple imput output programme
int main(int argc, char const *argv[])
{
	string name;
	cout << "Hai sir, Welcome to our hotel. Please be seated\n";
	cout << "\nCan you please tell me your name: " ;
	getline(cin, name);
	string foods[5] = {"Chicken Biriyani", "MasalaDosa", "Porota", "Appam", "Puttu"};
	cout << "\nOK! What do you like to have, Here is our list\n\n";

	for (int i = 0; i < 4; i++) {
		cout << foods[i] << endl;
	}
	int price = 40;

	cout << "\nWhat do you want, sir: ";
	string order;
	getline(cin, order);

	int amount;
	cout << "\nHow much do you want: ";
	cin >> amount;

	int total = price * amount;

	cout << "\nTotal price is $" << total << endl;
	cout << "\n" << name << " your " << order << " will be ready within few minutes\n";
	cout << "please wait\n";
	cout << "Thank you" << endl;

	return 0;
}
