#include "pch.h"
#include "Docent.h"

Docent::Docent(int _age, string _name, float _loon) {
	age = _age;
	name = _name;
	loon = _loon;
}


Docent::~Docent() {
}

float Docent::getSalary() {
	return loon;
}