//Name: Alyssa La FLeur
//Class: CS-172
//Homework #3
//Problem: 9.6 Quadratic Equation
//Purpose:  A program with a class called Quadratic Equation which takes input for a, b, and c and returns the roots if they exist

#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

//Main function using class and class methods to display the roots of an entered quadratic equation
int main()
{
	//Getting user entry for three variables
	double a = 0, b = 0, c = 0;
	cout << "Enter three values for a, b, and c for the equation ax^2 + bx + c = 0." << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	//Initializing equation
	QuadraticEquation Quad1(a, b, c);
	double test = Quad1.getDiscriminant();
	//Loops to display proper number of roots based on discriminant value
	if (test > 0)
	{
		cout << "The roots are " << Quad1.getRoot1() << " " << Quad1.getRoot2() << endl;
	}
	else if (test == 0)
	{
		if (Quad1.getRoot1() != 0)
		{
			cout << "The root is " << Quad1.getRoot1() << endl;
		}
		if (Quad1.getRoot2() != 0)
		{
			cout << "The root is " << Quad1.getRoot2() << endl;
		}
	}
	else
	{
		cout << "The equation has no real roots." << endl;
	}
	return 0;
}