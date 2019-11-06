// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <list>

using namespace std;

template <typename T>
void DisplayContents(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << ' ';
	}
	cout << endl;
}

int main() {

	list<int> listInts{ 1,2,3,4,5,6 };

	list<int>::const_iterator iterator1 = listInts.cbegin();

	cout << "iterator1 is: " << *iterator1 << endl;

	DisplayContents(listInts);

	listInts.push_front(326);

	cout << "iterator1 is: " << *iterator1 << endl;

	DisplayContents(listInts);

	return 0;

}

