#include "pch.h"
using namespace std;
#include "CoffeeMachine.h"
#include "CoffeeCoin.h"
#include "FiftyCent.h"
#include "OneEuro.h"
#include <iostream>
#include <string>

int main()
{
	std::string input;
	CoffeeMachine coffeeMachine;
	FiftyCent fiftyCent;
	OneEuro oneEuro;
	CoffeeCoin coffeeCoin;
	
	cout << "Welcome, please insert coin" << endl;
	while (true)
	{
		getline (cin, input);
		if (input == "Fifty Cents") {
			coffeeMachine.acceptCoin(fiftyCent);
			cout << "0.50 inserted" << endl;
		}
		if (input == "One Euro") {
			coffeeMachine.acceptCoin(oneEuro);
			cout << "1.00 inserted" << endl;
		}
		if (input == "Coffee Coin") {
			coffeeMachine.acceptCoin(coffeeCoin);
			cout << "coffee coin inserted" << endl;
		}
		if (input == "Espresso") {
			coffeeMachine.checkCoffeeAvailibility();
			if (coffeeMachine.espressoAvailable) {
				cout << "Espresso acquired." << endl;
				if (coffeeMachine.coffeeCoinActive) {
					coffeeMachine.coffeeCoinActive = false;

				}
				else {
					coffeeMachine.moneyInMachine -= 1.5f;
				}
			}
			else {
				cout << "You cannot afford an espresso." << endl;
			}
		}
		if (input == "Coffee") {
			coffeeMachine.checkCoffeeAvailibility();
			if (coffeeMachine.coffeeAvailable) {
				cout << "Coffee acquired." << endl;
				if (coffeeMachine.coffeeCoinActive) {
					coffeeMachine.coffeeCoinActive = false;
				}
				else {
					coffeeMachine.moneyInMachine -= 2.0f;
				}
			}
			else {
				cout << "You cannot afford a coffee." << endl;
			}
		}
		if (input == "Cappucino") {
			coffeeMachine.checkCoffeeAvailibility();
			if (coffeeMachine.cappucinoAvailable) {
				cout << "Cappucino acquired." << endl;
				if (coffeeMachine.coffeeCoinActive) {
					coffeeMachine.coffeeCoinActive = false;
				}
				else {
					coffeeMachine.moneyInMachine -= 2.5f;
				}
			}
			else {
				cout << "You cannot afford a cappucino." << endl;
			}
		}
		cout << "Please insert another coin or select your coffee, you have: " << coffeeMachine.moneyInMachine << endl;
	}
}

