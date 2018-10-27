#include "pch.h"
#include "Bibliotheek.h"
#include <iostream>


Bibliotheek::Bibliotheek() {
	std::cout << "Bibliotheek ctor" << std::endl;
}

Bibliotheek::~Bibliotheek() {
	std::cout << "Bibliotheek: dtor" << std::endl;
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
	std::cout << "Biliotheek: copy-ctor" << std::endl;
	boek = new Boek();
	boek->titel = bibliotheek.boek->titel;
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& andereBib) {
	std::cout << "Bibliotheek: assignment-oper" << std::endl;
	if (this != &andereBib) {
		if (boek) {
			delete boek;
		}
		boek = new Boek(andereBib.boek->titel);
	}
	return *this;
}

void Bibliotheek::toon() {
	std::cout << "Bibliotheek bevat:" << boek->titel << std::endl;
}

void Bibliotheek::voegToe(std::string _titel) {
	boek = new Boek(_titel);
}
