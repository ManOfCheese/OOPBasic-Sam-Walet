// PersoonInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Persoon.h"
#include "Student.h"
#include "Docent.h"
using namespace std;

int main() {
	Student studentA(21, "Arnold");
	Docent docentA(31, "Sylvester");

	cout << studentA.getAge() << endl;
	cout << studentA.getName() << endl;
	cout << studentA.getStudyPoints() << endl;
	cout << docentA.getAge() << endl;
	cout << docentA.getName() << endl;
	cout << docentA.getSalary() << endl;
}
