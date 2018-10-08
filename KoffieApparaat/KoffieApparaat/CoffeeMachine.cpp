#include "pch.h"
#include "CoffeeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine() {
	moneyInMachine = 0.0f;
	coffeeCoinActive = false;
	espressoAvailable = false;
	coffeeAvailable = false;
	cappucinoAvailable = false;
}


CoffeeMachine::~CoffeeMachine() {
}

void CoffeeMachine::acceptCoin(Coin& coin) {
	moneyInMachine += coin.worth;
	if (coin.name == "Coffee Coin") {
		coffeeCoinActive = true;
		cout << "Espresso" << endl;
		espressoAvailable = true;
		cout << "Coffee" << endl;
		coffeeAvailable = true;
		cout << "Cappucino" << endl;
		cappucinoAvailable = true;
	}
	else if (moneyInMachine >= 2.5f) {
		cout << "Espresso" << endl;
		espressoAvailable = true;
		cout << "Coffee" << endl;
		coffeeAvailable = true;
		cout << "Cappucino" << endl;
		cappucinoAvailable = true;
	}
	else if (moneyInMachine >= 2.0f) {
		cout << "Espresso" << endl;
		espressoAvailable = true;
		cout << "Coffee" << endl;
		coffeeAvailable = true;
	}
	else if (moneyInMachine >= 1.5f) {
		cout << "Espresso" << endl;
		espressoAvailable = true;
	}
}

void CoffeeMachine::checkCoffeeAvailibility() {
	espressoAvailable = coffeeCoinActive;
	coffeeAvailable = coffeeCoinActive;
	cappucinoAvailable = coffeeCoinActive;
	if (moneyInMachine >= 1.5f) {
		espressoAvailable = true;
	}
	if (moneyInMachine >= 2.0f) {
		coffeeAvailable = true;
	}
	if (moneyInMachine >= 2.5f) {
		cappucinoAvailable = true;
	}
}
