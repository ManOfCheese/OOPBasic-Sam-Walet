#pragma once
#include <string>
#include <iostream>
using namespace std;

class Docent : public Persoon {
public:
	Docent(int _age, string _name, float _loon);
	~Docent();
	float getSalary(); 
protected:
	float loon;
};