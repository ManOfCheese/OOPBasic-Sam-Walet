#pragma once
class Bus {
public:
	int maxPassagiers;
	float instapTarief;
	float prijsPerKilometer;
	virtual float berekenOpbrengst(int kilometers) = 0;
};