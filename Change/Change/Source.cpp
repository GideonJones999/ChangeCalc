#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>

using namespace std;
void ReturnChange(int, int);
int main() {
	int change, numCoins = 0;
	cout << "How much change are you owed? (in cents)" << endl;
	cin >> change;
	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "How much change are you owed? (in cents)" << endl;
		cin >> change;
	}
	cout << "What size of coin do you want?" << endl;
	string name[] = { " - Silver Dollars", " - Half Dollars", " - Silver Dollars", " - Quarters", " - Dimes ", " - Nickels", " - Pennies"};
	int coin[] = { 100, 50, 25, 10, 5, 1 };
	int coinIndex = 0;
	while (coinIndex < 6) {
		cout << coinIndex << name[coinIndex] << endl;
		coinIndex++;
	}
	cin >> coinIndex;
	while (cin.fail() || coinIndex > 5)
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "What size of coin do you want?" << endl;
		string name[] = { " - Silver Dollars", " - Half Dollars", " - Silver Dollars", " - Quarters", " - Dimes ", " - Nickels", " - Pennies" };
		int coin[] = { 100, 50, 25, 10, 5, 1 };
		int coinIndex = 0;
		while (coinIndex < 6) {
			cout << coinIndex << name[coinIndex] << endl;
			coinIndex++;
		}
	}

	cout << endl << endl;

	while (coinIndex < 6) {
		numCoins = ReturnChange(change, coin[coinIndex]);
		cout << numCoins << name[coinIndex] << endl;

		coinIndex++;
	}

	system("PAUSE");
	return 0;
}

int ReturnChange(int& change, int coin) {
	int numCoins = change / coin;
	change -= (coin * numCoins);

	return numCoins;
}
