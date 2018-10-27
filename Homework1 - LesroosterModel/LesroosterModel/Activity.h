#pragma once
#include <string>

//This class is every lesson or activity in the roster, it is a collection of all the information such an activity needs to have.

class Activity
{
public:
	Activity(); //This is the constructor
	~Activity(); //This is the dectructor
private:
	int date[3];                //Date of the activity. For Example {11, 9, 2018}.
	int startTime[2];           //When the activity begins. For example: {9,15}.
	int endTime[2];             //When the activity ends. For example: {10,45}.
	std::string activityName;   //Name of the activity. For example: Object Oriented Programming Basic.
	std::string teacherName;    //Name of the teacher/lecturer. For Example: Edwin van Moria Ouwerkerk.
	std::string Location;       //Location of the activity. For Example: IB168. 
	std::string classes[];      //The classes that need to attend this activity. For Example {GDV2, GDS2, etc.}
};

