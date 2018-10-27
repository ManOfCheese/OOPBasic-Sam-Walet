#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student : public Persoon {
public:
	Student(int _age, string _name, int _studiepunten);
	~Student();
	int getStudyPoints();
protected:
	int studiepunten;
};