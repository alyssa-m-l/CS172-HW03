#pragma once
//inclusion guard
#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <iostream>
using namespace std;

class MyInteger
{
	//private variable
private:
	int value;
public:
	//Public functions
	MyInteger(int input);
	int getValue() const;
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	static bool isEven(int value);
	static bool isOdd(int value);
	static bool isPrime(int value);
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);
	bool equals(int value) const;
	bool equals(const MyInteger&, int check) const;
	static void parseInt(const string&);
};

#endif // !MYINTEGER_H

