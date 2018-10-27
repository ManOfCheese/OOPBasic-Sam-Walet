#include "pch.h"
#include "RegioBus.h"


RegioBus::RegioBus()
{
}


RegioBus::~RegioBus()
{
}

float RegioBus::berekenOpbrengst(int kilometers) {
	return (maxPassagiers * instapTarief) + (maxPassagiers * kilometers * prijsPerKilometer);
}
