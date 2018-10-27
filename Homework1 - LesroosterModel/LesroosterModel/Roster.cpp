#include "pch.h"
#include "Roster.h"
#include <iostream>
using namespace std;


Roster::Roster()
{
	cout << "Roster Object is being created" << endl;
}


Roster::~Roster()
{
	cout << "Roster Object is being deleted" << endl;
}

void Roster::createActivity()
{
	//This method creates a new instance of the activity class and fills in the variables. Then it adds it to the array of activities.
}

void Roster::displayActivities()
{
	//This method displays all activites in order adding a space everytime a new day starts.
}
