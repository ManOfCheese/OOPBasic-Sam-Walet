#pragma once
#include <string>
#include <iostream>
using namespace std;

class Persoon {
public:
	Persoon(int _age, string _name);
	~Persoon();
	int getAge();
	string getName();
protected:
	int age;
	string name;
};