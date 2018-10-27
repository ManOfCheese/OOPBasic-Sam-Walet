#pragma once
#include "Bus.h"

class RegioBus : public Bus {
public:
	RegioBus();
	~RegioBus();
	float berekenOpbrengst(int kilometers) override;
	int maxPassagiers = 8;
	float instapTarief = 0.9;
	float prijsPerKilometer = 0.143;
};

