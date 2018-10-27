#include "pch.h"
#include "Student.h"

Student::Student(int _age, string _name, int _studiepunten) {
	age = _age;
	name = _name;
	studiepunten = _studiepunten;
}


Student::~Student() {
}

int Student::getStudyPoints() {
	return studiepunten;
}