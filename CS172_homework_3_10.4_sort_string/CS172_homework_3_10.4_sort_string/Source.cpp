//Name: Alyssa La Fleur
//Class: CS 172
//Homework #3
//Problem 10.4 (sort characters in a string)
//Purpose:  A program to return a alphabetically sorted version of a entered string using a pass by reference function

#include <iostream>
#include <string>
using namespace std;

//Function to sort string alphabetically
string sort(string& s)
{
	//Getting limit of loops
	int limit = s.length();
	//storage variable for loops
	char storage;
	//Loop through all letters
	for (int i = 0; i < limit; i++)
	{
		//Compare all letters to one before
		for (int j = i+1; j < limit; j++)
		{
			//If it is larger, replace letter before with letter
			if (s[j - 1] > s[j])
			{
				storage = s[j];
				s[j] = s[j-1];
				s[j - 1] = storage;
			}
		}
	}
	return s;
}

//Calling sorting function
int main()
{
	string s1("cabdeflmn");
	cout << sort(s1) << endl;
	return 0;
}
