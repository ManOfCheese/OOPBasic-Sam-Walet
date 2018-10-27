#pragma once
class Roster
{
public:
	void createActivity();
	void displayActivities();
	Roster();
	~Roster();
private:
	Activity activities[];
};

