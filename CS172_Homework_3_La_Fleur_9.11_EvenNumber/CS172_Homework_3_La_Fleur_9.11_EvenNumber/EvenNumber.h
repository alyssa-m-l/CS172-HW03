#pragma once
//inclusion guard
#ifndef EVENNUMBER_H
#define EVENNUMBER_H

//Class for even number
class EvenNumber
{
	//private properties
private:
	int value;
public:
	//public methods
	EvenNumber();
	EvenNumber(int val);
	int getValue();
	int getNext();
	int getPrevious();
};

//end inclusion guard
#endif