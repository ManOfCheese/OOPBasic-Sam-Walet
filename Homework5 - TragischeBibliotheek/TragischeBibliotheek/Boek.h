#pragma once
#include <string>

class Boek
{
public:
	Boek();
	Boek(std::string _titel);
	virtual ~Boek();

	std::string titel;
};

