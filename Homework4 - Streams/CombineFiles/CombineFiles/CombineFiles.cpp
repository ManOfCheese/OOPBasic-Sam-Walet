// CombineFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream samenvoegen1;
	samenvoegen1.open("C:\\Users\\samwa\\source\\repos\\Samenvoegen1.txt");
	
	if (!samenvoegen1) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}	std::ifstream samenvoegen2;
	samenvoegen2.open("C:\\Users\\samwa\\source\\repos\\Samenvoegen2.txt");

	if (!samenvoegen2) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}	std::ofstream samengevoegd;
	samengevoegd.open("C:\\Users\\samwa\\source\\repos\\Samengevoegd.txt");
	if (!samengevoegd) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}
	char data;

	while (!samenvoegen2.eof())
	{
		samenvoegen1 >> data;
		samengevoegd << data;
		samenvoegen2 >> data;
		samengevoegd << data;
	}
}
