#include "Fan.h"
#include <iostream>
using namespace std;

//Implementation for Class functions
//Constructor function
	Fan::Fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}
	//Set function for speed
	void Fan::setSpeed(int newSpeed)
	{
		//Loops to specify allowed values and make sure correct value is entered
		if (newSpeed == 1 || newSpeed == 2 || newSpeed == 3)
		{
			speed = newSpeed;
		}
		else
		{
			cout << "Inputs must be 1, 2, or 3" << endl;
			while (newSpeed != 1 && newSpeed != 2 && newSpeed != 3)
			{
				cout << "Enter new input: " << endl;
				cin >> newSpeed;
			}
		}
	}
	//Get function for speed
	int Fan::getSpeed()
	{
		return speed;
	}
	//Set function for on/off
	void Fan::setOn(bool setting)
	{
		on = setting;
	}
	//Get function for on/off (returns the word on or off)
	string Fan::isOn()
	{
		string answer = "";
		if (on)
		{
			answer = "on";
		}
		else
		{
			answer = "off";
		}
		return answer;
	}
	//Set function for radius
	void Fan::setRadius(double newRadius)
	{
		radius = newRadius;
	}
	//Get function for radius
	double Fan::getRadius()
	{
		return radius;
	}

