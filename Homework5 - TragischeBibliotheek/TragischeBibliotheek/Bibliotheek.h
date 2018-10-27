#pragma once
#include "Boek.h"
#include <string>

class Bibliotheek
{
public:
	Bibliotheek();
	virtual ~Bibliotheek();
	Bibliotheek(const Bibliotheek& bibliotheek);
	Bibliotheek& operator=(const Bibliotheek&);

	void toon();
	void voegToe(std::string _titel);
private:
	Boek* boek = new Boek();
};

