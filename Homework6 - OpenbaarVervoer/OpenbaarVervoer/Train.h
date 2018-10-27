#pragma once
class Train {
public:
	int maxPassagiers;
	float prijsPerKilometer;
	float toeslag;
	virtual float berekenOpbrengst(int kilometers) = 0;
};