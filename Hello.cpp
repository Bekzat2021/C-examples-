// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

typedef map<int, string> MAP_INT_STRING;
typedef multimap<int, string> MMAP_INT_STRING;

template <typename T>
void DisplayContents(const T& cont)
{
	for (auto element = cont.cbegin(); element != cont.cend(); element++)
	{
		cout << element->first << " -> " << element->second << endl;
	}

	cout << endl;
}

int main() {

	map<int, string> mapIntToStr;

	mapIntToStr.insert(make_pair(3, "Three"));
	mapIntToStr.insert(make_pair(45, "Fourty Five"));
	mapIntToStr.insert(make_pair(-1, "Minus One"));
	mapIntToStr.insert(make_pair(1000, "Thousand"));

	cout << "The multimap contains " << mapIntToStr.size();
	cout << " key - value pairs. They are: " << endl;

	DisplayContents(mapIntToStr);

	cout << "Enter the key you wish to find: ";
	int key = 0;
	cin >> key;

	map<int, string>::const_iterator pairFound = mapIntToStr.find(key);
	if (pairFound!=mapIntToStr.end())
	{
		cout << "Key " << pairFound->first << " points to value: ";
		cout << pairFound->second << endl;
	}
	else {
		cout << "Sorry, pair with key " << key << " not in map" << endl;
	}

	return 0;
}