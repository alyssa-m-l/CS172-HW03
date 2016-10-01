//Name: Alyssa La Fleur
//Class: CS-172
//Homework: #3
//Problem: 9.11 EvenNumber Class
//Purpose: Create a class for representing an even number

#include <iostream>
#include "EvenNumber.h"
using namespace std;

//test class and methods
int main()
{
	//Initialize class object to 16
	EvenNumber test1(16);
	//Displaying numbers before and after
	cout << "The even number before " << test1.getValue() << " is " << test1.getPrevious() << endl;
	cout << "The even number after " << test1.getValue() << " is " << test1.getNext() << endl;
	return 0;
}