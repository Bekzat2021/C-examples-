// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename T>
void DisplayContents(const T &cont) {
	for (multimap<int, string>::const_iterator element = cont.cbegin(); element != cont.cend(); element++)
	{
		cout << element->first << " - > " << element->second << endl;
	}

	cout << endl;
}

int main() {

	multimap<int, string> mmapIntToStr;

	mmapIntToStr.insert(make_pair(3, "Three"));
	mmapIntToStr.insert(make_pair(45, "Fourty Five"));
	mmapIntToStr.insert(make_pair(-1, "Minus One"));
	mmapIntToStr.insert(make_pair(1000, "Thousand"));

	mmapIntToStr.insert(make_pair(-1, "Minus One"));
	mmapIntToStr.insert(make_pair(1000, "Thousand"));

	cout << "The multimap contains " << mmapIntToStr.size();
	cout << " key-value pairs. They are: " << endl;
	DisplayContents(mmapIntToStr);

	multimap<int, string>::difference_type numPairsErased = mmapIntToStr.erase(3);

	DisplayContents(mmapIntToStr);

	return 0;
}