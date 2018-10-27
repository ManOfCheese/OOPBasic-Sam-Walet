#include "pch.h"
#include "DrieDeligeBus.h"


DrieDeligeBus::DrieDeligeBus()
{
}


DrieDeligeBus::~DrieDeligeBus()
{
}

float DrieDeligeBus::berekenOpbrengst(int kilometers) {
	return (maxPassagiers * instapTarief) + (maxPassagiers * kilometers * prijsPerKilometer);
}
