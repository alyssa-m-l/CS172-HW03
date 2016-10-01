#pragma once
//inclusion guard
#ifndef	QUADRATICEQUATION_H
#define QUADRATICEQUATION_H	
#include <iostream>
using namespace std;

//class for Quadratic Equation
class QuadraticEquation
{
	//Private properties of class
private:
	double a;
	double b;
	double c;
	//public methods of class
public:
	QuadraticEquation(double newA, double newB, double newC);
	int getA();
	int getB();
	int getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
};
//end inclusion guard
#endif
