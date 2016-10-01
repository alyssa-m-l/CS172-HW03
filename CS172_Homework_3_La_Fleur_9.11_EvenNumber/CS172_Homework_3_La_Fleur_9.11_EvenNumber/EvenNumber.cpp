#include <iostream>
#include "EvenNumber.h"
using namespace std;

//No argument constructor to set value to 0, no inputs, no output
EvenNumber::EvenNumber()
{
	value = 0;
}

//Constructor with arguments to set value to argument, input of new value, no outputs
EvenNumber::EvenNumber(int val)
{
	value = val;
}
//Get function to return value, no inputs, output of value
int EvenNumber::getValue()
{
	return value;
}

//Method to give next even number after value, no inputs, output of next even number
int EvenNumber::getNext()
{
	int newVal = value + 2;
	return newVal;
}

//Method to give previous even number before value, no inputs, output of last even number
int EvenNumber::getPrevious()
{
	int newVal = value - 2;
	return newVal;
}