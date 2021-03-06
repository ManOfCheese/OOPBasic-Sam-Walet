// FileStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	std::ifstream inStream;
	inStream.open("C:\\Users\\samwa\\source\\repos\\Omkeren.txt");

	std::ofstream outStream;
	outStream.open("C:\\Users\\samwa\\source\\repos\\Omgekeerd.txt");

	string line;
	int charCount = 0;

	if (!inStream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	if (!outStream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	if (inStream.is_open()) {
		while (getline(inStream, line)) {
			cout << line << endl;
			charCount += line.length();
		}
	}
	std::cout << charCount << std::endl;

	reverse(line.begin(), line.end());
	outStream << line;
}