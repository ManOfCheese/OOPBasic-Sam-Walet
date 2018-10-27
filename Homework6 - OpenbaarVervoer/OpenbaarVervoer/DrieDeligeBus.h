#pragma once
#include "Bus.h"

class DrieDeligeBus : public Bus {
public:
	DrieDeligeBus();
	~DrieDeligeBus();
	float berekenOpbrengst(int kilometers) override;
	int maxPassagiers = 200;
	float instapTarief = 0.9;
	float prijsPerKilometer = 0.143;
};

