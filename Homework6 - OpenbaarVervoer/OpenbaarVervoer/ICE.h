#pragma once
#include "Train.h"

class ICE : public Train {
public:
	ICE();
	~ICE();
	int maxPassagiers;
	float prijsPerKilometer;
	float toeslag;
	float berekenOpbrengst(int kilometers) override;
};

