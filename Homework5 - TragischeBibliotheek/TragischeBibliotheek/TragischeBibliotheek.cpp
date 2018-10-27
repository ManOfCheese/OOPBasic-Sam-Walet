// TragischeBibliotheek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Bibliotheek.h"

int main() {
	std::cout << "Bibliotheek 1" << std::endl;
	Bibliotheek bibliotheek1 = Bibliotheek();
	bibliotheek1.toon();

	bibliotheek1.voegToe("The Fall Of Gondolin");
	std::cout << "Bibliotheek 1" << std::endl;
	bibliotheek1.toon();

	Bibliotheek bibliotheek2;
	bibliotheek2 = bibliotheek1;
	std::cout << "Bibliotheek2" << std::endl;
	bibliotheek2.toon();

	bibliotheek1.voegToe("Necronomicon");
	std::cout << "Bibliotheek 1" << std::endl;
	bibliotheek1.toon();

	std::cout << "Bibliotheek 2" << std::endl;
	bibliotheek2.toon();

	int c;
	std::cin >> c;

	return 0;
}
