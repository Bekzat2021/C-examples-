// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <list>
#include <iostream>

using namespace std;

template <typename T>
void DisplayContents(const T& container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << ' ';
	}
	cout << endl;
}

int main() {

	list<int> linkInts1;

	linkInts1.insert(linkInts1.cbegin(), 2);
	linkInts1.insert(linkInts1.cbegin(), 1);

	linkInts1.insert(linkInts1.cend(), 3);

	cout << "The contents of list 1 after inserting elements: " << endl;
	DisplayContents(linkInts1);

	list<int> linkInts2;

	linkInts2.insert(linkInts2.begin(), 4, 0);

	cout << "The contents of list 2 after inserting ' ";
	cout << linkInts2.size() << " ' elements of value: " << endl;
	DisplayContents(linkInts2);

	list<int> linkInts3;

	linkInts3.insert(linkInts3.begin(), linkInts1.begin(), linkInts1.end());

	cout << "The contents of list 3 after inserting contents of list 1 at the beginning: " << endl;
	DisplayContents(linkInts3);

	linkInts3.insert(linkInts3.end(), linkInts2.begin(), linkInts2.end());

	cout << "The contents of list 3 after inserting contents of list 2 at the end: " << endl;
	DisplayContents(linkInts3);

	return 0;
}