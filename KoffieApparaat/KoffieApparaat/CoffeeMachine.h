#pragma once
using namespace std;
#include <string>
#include <map>
#include "Coin.h"

class CoffeeMachine
{
public:
	CoffeeMachine();
	~CoffeeMachine();
	float moneyInMachine;
	bool coffeeCoinActive;
	bool espressoAvailable;
	bool coffeeAvailable;
	bool cappucinoAvailable;
	void acceptCoin(Coin& coin);
	void checkCoffeeAvailibility();
};

