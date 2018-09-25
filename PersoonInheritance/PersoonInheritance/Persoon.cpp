#include "pch.h"
#include "Persoon.h"


Persoon::Persoon(int _age, string _name) {
	age = _age;
	name = _name;
}


Persoon::~Persoon() {
}

int Persoon::getAge() {
	return age;
}

string Persoon::getName() {
	return name;
}
