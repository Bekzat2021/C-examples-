// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> userArray;

	cout << "How many integers you want to save " << endl;
	cout << "> ";
	int index = 0;
	cin >> index;

	int inputValue = 0;
	for (size_t i = 0; i < index; i++)
	{
		cout << "Enter a value " << i << ": ";
		cin >> inputValue;
		userArray.push_back(inputValue);
		inputValue = 0;
	}

	for (size_t i = 0; i < userArray.size(); i++)
	{
		cout << i << " = " << userArray[i] << endl;
	}

	cout << "What value you want to see? " << endl;
	cout << "Enter a index: ";
	index = 0;
	cin >> index;

	if ((index>=userArray.size()) || (index<0))
	{
		cout << "You entered wrong value. " << endl;
	}
	else 
	{
		cout << "Element at index " << index << " = " << userArray[index] << endl;
	}
	
	return 0;
}