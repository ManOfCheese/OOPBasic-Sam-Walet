#pragma once
#include "Train.h"

class Intercity : public Train {
public:
	Intercity();
	~Intercity();
	int maxPassagiers = 1000;
	float prijsPerKilometer = 0.11;
	float toeslag = 0;
    float berekenOpbrengst(int kilometers) override;
};

