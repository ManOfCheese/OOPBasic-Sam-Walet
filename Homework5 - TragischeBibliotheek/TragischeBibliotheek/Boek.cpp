#include "pch.h"
#include "Boek.h"
#include <iostream>


Boek::Boek() {
	std::cout << "Boek default ctor" << std::endl;
}

Boek::Boek(std::string _titel)
{
	std::cout << "Boek ctor" << std::endl;
	titel = _titel;
}


Boek::~Boek()
{
	std::cout << "Boek : dtor" << std::endl;
}
