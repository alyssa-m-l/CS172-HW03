#pragma once
//Inclusion guard
#ifndef FAN_H
#define FAN_H

#include <iostream>
using namespace std;

//Class for Fan
class Fan
{
//Private properties
private:
	int speed;
	bool on;
	double radius;
//Public methods
public:
	//Constructor Function
	Fan();
	//Methods for setting and getting all variables
	void setSpeed(int newSpeed);
	int getSpeed();
	void setOn(bool setting);
	string isOn();
	void setRadius(double newRadius);
	double getRadius();
};

#endif
