// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

int main() {
	
	using namespace std;

	vector<int> numsInVec{ 2017, 0, -1, 42, 10101, 25 };

	cout << "Enter number to find in collection: ";
	int numToFind = 0;
	cin >> numToFind;

	vector<int>::const_iterator element = find(numsInVec.cbegin(),
		numsInVec.cend(),
		numToFind);


	if (element!=numsInVec.cend())
	{
		cout << "Value " << *element << " found!" << endl;
	}
	else {
		cout << "No element contains value " << numToFind << endl;
	}

	cout << "Finding the first even number using find_if: " << endl;

	vector<int>::const_iterator evenNum = find_if(numsInVec.cbegin(),
		numsInVec.cend(),
		[](int element) {return ((element % 2) == 0); });

	if (evenNum!=numsInVec.cend())
	{
		cout << "Number '" << *evenNum << "' found at position [";
		cout << distance(numsInVec.cbegin(), evenNum) << "]" << endl;
	}

	return 0;
}