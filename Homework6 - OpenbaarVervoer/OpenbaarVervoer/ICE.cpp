#include "pch.h"
#include "ICE.h"


ICE::ICE()
{
}


ICE::~ICE()
{
}

float ICE::berekenOpbrengst(int kilometers) {
	return (maxPassagiers * toeslag) + (maxPassagiers * prijsPerKilometer * kilometers);
}
