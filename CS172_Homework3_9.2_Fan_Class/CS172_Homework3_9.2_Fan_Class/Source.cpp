//Name: Alyssa La Fleur
//Class: CS-172
//Homework: #3
//Problem: 9.2 (Fan Class)
//Purpose:  A program to create a class called fan with properties of speed, raduis, and a on/off value using classes
#include<iostream>
#include <string>
#include "Fan.h"
using namespace std;

//Main fucntion initializing two objects and calling class methods to set and get their properties
int main()
{
	//Initializing objects
	Fan fan1;
	Fan fan2;
	//Setting properties for object one with methods
	fan1.setOn(true);
	fan1.setRadius(10);
	fan1.setSpeed(3);
	//Setting properties for object two with methods
	fan2.setOn(false);
	fan2.setRadius(5);
	fan2.setSpeed(2);
	//Getting and displaying all set properties for both objects
	cout << "The first object has speed " << fan1.getSpeed() << " radius " << fan1.getRadius() << " and is " << fan1.isOn() << endl;
	cout << "The second object has speed " << fan2.getSpeed() << " radius " << fan2.getRadius() << " and is " << fan2.isOn() << endl;
	return 0;
}

