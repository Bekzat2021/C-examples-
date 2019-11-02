// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <deque>
#include <string>

using namespace std;

template <typename T>
void DisplayItems(deque<T> values, int size) {

	for (auto element=values.cbegin(); element!=values.cend(); element++)
	{
		cout << *element << " ";
	}
	
	cout << endl;
}

int main() {
	
	deque<string> strings = { "Hello", "Containers are cool!", "C++ is evolving!" };	
	DisplayItems(strings, strings.size());

	deque<int> ints = { 12, 13, 14, 15, 16 };
	DisplayItems(ints, ints.size());

	return 0;
}