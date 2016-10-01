#include <iostream>
#include "MyInteger.h"
#include <string>
using namespace std;

//Constructor function for class, input of desired value, no output
MyInteger::MyInteger(int input)
{
	value = input;
}
//Get function for value in MyInteger, no inputs, output of value
int MyInteger::getValue() const
{
	return value;
}
//Function to test if value is even, no inputs, output of bool value
bool MyInteger::isEven() const
{
	bool statement = false;
	if (value % 2 == 0)
	{
		return true;
	}
	return statement;
}
//Function to test if value is odd, no inputs, output of bool value
bool MyInteger::isOdd() const
{
	bool statement = true;
	if (value % 2 == 0)
	{
		statement = false;
	}
	return statement;
}
//Function to test if value is prime, no inputs, output of bool value
bool MyInteger::isPrime() const
{
	bool statement = true;
	for (int i = 1; i < 11; i++)
	{
		if (value % i == 0 && value != 1 && value != 2 && value !=3 )
		{
			statement = false;
		}
	}
	return statement;
}
//Function to test if value is even, input of value, output of bool value
bool MyInteger::isEven(int value)
{
	bool statement = false;
	if (value % 2 == 0)
	{
		return true;
	}
	return statement;
}
//Function to tests if value is odd, input of value, output of bool value
bool MyInteger::isOdd(int value)
{
	bool statement = true;
	if (value % 2 == 0)
	{
		statement = false;
	}
	return statement;
}
//Function to test if value is prime, input of value,  output of bool value
bool MyInteger::isPrime(int check)
{
	bool statement = true;
	for (int i = 0; i < 11; i ++)
	{
		if (check != 1 && check != 2 && check != 3)
		{
			if (check % i == 0)
			{
				statement = false;
			}
		}
	}
	return statement;
}
//Function to test if value is even, input of class object, output of bool value. no inputs
bool MyInteger::isEven(const MyInteger& value)
{
	bool statement = false;
	if (value.getValue() % 2 == 0)
	{
		return true;
	}
	return statement;
}
//Function to test if value is odd, input of class object, output of bool value
bool MyInteger::isOdd(const MyInteger& value)
{
	bool statement = true;
	if (value.getValue() % 2 == 0)
	{
		statement = false;
	}
	return statement;
}
//Function to test if value is prime, input of class object, output of bool value
bool MyInteger::isPrime(const MyInteger& check)
{
	bool statement = true;
	int etc = check.getValue();
	for (int i = 0; i < 11; i++)
	{
		if (etc != 1 && etc != 2 && etc != 3)
		{
			if (etc % i == 0)
			{
				statement = false;
			}
		}
	}
	return statement;

}
//Funcition to see if value is equal to a entered int, input of number to check against, output of bool value
bool MyInteger::equals(int checkAgainst) const
{
	bool statement = false;
	if (checkAgainst == value)
	{
		statement = true;
	}
	return statement;
}
//Function to check if a number is equal to the stored number, input of class, output of bool value
bool MyInteger::equals(const MyInteger& value, int check) const
{
	bool statement = false;
	if (check == value.getValue())
	{
		statement = true;
	}
	return statement;
}
//function to return a integer if a string is entered, input of string
void MyInteger::parseInt(const string& str)
{
	int number_of_string = atoi(str.c_str());
	cout << "The string as a number is " << number_of_string << endl;	
}