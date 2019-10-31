// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> integers{ 50, 1, 987, 1001 };

	for (size_t index = 0; index < integers.size(); index++)
	{
		cout << "Elements [" << index << "] = ";
		cout << integers.at(index) << endl;
	}

	integers[2] = 2011;
	cout << "After replacement: ";
	cout << "Element[2] = " << integers[2] << endl;

	for (size_t index = 0; index < integers.size(); index++)
	{
		cout << "Elements [" << index << "] = ";
		cout << integers.at(index) << endl;
	}

	return 0;
}