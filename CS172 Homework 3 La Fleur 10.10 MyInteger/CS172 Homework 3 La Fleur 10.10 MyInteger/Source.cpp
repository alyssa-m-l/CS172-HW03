//Name: Alyssa La Fleur
//Class CS 172
//Homework #3
//Problem: 10.10 The MyInteger Class
//Purpose:  A class which stores a integer variable, and has a variety of functions to determine if said number is even, odd, and prime.
//Also, it includes functions to check if the the number is equal to another, and return a string as a integer
#include <iostream>
#include "MyInteger.h"
#include <string>
using namespace std;

//Test all functions in MyInteger class
int main()
{
	MyInteger i(2);
	cout << i.getValue() << endl;
	cout << i.isEven() << endl;
	cout << i.isOdd() << endl;
	cout << i.isPrime() << endl;
	cout << MyInteger::isEven(i.getValue()) << endl;
	cout << MyInteger::isOdd(i.getValue()) << endl;
	cout << MyInteger::isPrime(i.getValue()) << endl;
	cout << MyInteger::isEven(i) << endl;
	cout << MyInteger::isOdd(i) << endl;
	cout << MyInteger::isPrime(i) << endl;
	cout << i.equals(4) << endl;
	cout << i.equals(i, 4) << endl;
	i.parseInt("a");
	return 0;
}