#include <iostream>
#include "QuadraticEquation.h"
#include <cmath>
using namespace std;

//Constructor function for class, inputs of desired values, no outputs
QuadraticEquation::QuadraticEquation(double newA, double newB, double newC)
{
	a = newA;
	b = newB;
	c = newC;
}

//method to get a, no inputs, output of a
int QuadraticEquation::getA()
{
	return a;
}

//get c method, no inputs, output of c
int QuadraticEquation::getB()
{
	return b;
}

//get c method, no inputs, output of c
int QuadraticEquation::getC()
{
	return c;
}

//Method to return discriminant of equation, no inputs, output of discriminant
double QuadraticEquation::getDiscriminant()
{
	double disc = 0;
	disc = (b*b) - (4 * a*c);
	return disc;
}

//Method to return root 1, no inputs, output of root 1
double QuadraticEquation::getRoot1()
{
	double top = 0;
	top = getDiscriminant();
	double root1 = 0;
	//loop to set to correct value if discriminant does not equal 0
	if (top > 0|| top == 0)
	{
		root1 = ((-1*b) + pow(top, 0.5)) / (2 * a);
	}
	return root1;
}

//method to return root 2, no inputs, output of root 2
double QuadraticEquation::getRoot2()
{
	double top = getDiscriminant();
	double root2 = 0;
	//loop to set to correct value if discriminant does not equal 0
	if (top > 0 || top == 0)
	{
		root2 = ((-1* b) - pow(top, 0.5)) / (2 * a);
	}
	else
	{
		root2 = 0;
	}
	return root2;
}