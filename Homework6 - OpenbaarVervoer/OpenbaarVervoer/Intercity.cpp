#include "pch.h"
#include "Intercity.h"


Intercity::Intercity()
{
}


Intercity::~Intercity()
{
}

float Intercity::berekenOpbrengst(int kilometers) {
	return maxPassagiers * kilometers * prijsPerKilometer;
}
