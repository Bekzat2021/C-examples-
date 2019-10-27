// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main() {

	// Dynamic array
	deque <int> intArray;

	// Inserting values
	intArray.push_back(50);
	intArray.push_back(2991);
	intArray.push_back(23);
	intArray.push_back(9999);

	cout << "The content of the vector are: " << endl;

	// walk the vector and read values
	deque <int>::iterator arrIterator = intArray.begin();

	while (arrIterator!=intArray.end())
	{
		cout << *arrIterator << endl;

		arrIterator++;
	}

	// searching value 2991
	deque <int>::iterator elFound = find(intArray.begin(), intArray.end(), 2991);

	if (elFound!=intArray.end())
	{
		// determine position
		int elPos = distance(intArray.begin(), elFound);
		cout << "Value " << *elFound;
		cout << " found in the vector at position: " << elPos << endl;
	}

	return 0;
}
