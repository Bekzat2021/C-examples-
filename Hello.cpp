// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename elementType>
struct DisplayElementKeepCount
{
	int count;
	DisplayElementKeepCount() :count(0) {}

	void operator ()(const elementType &element) {
		++count;
		cout << element << ' ';
	}
};

int main() {
	
	vector<int> numsInVec{ 2017, 0, -1, 42, 10101, 25 };

	cout << "Elements in vector are: " << endl;
	DisplayElementKeepCount<int> functor = for_each(numsInVec.cbegin(),
		numsInVec.cend(),
		DisplayElementKeepCount<int>());
	cout << endl;

	cout << "'" << functor.count << "' elements displayed" << endl;

	string str("for_each and strings!");
	cout << "Sample string: " << str << endl;

	cout << "Characters displaying using lambda: " << endl;
	int numChars = 0;
	for_each(str.cbegin(),
		str.cend(),
		[&numChars](char c) {cout << c << ' '; numChars++; });
	cout << endl;
	cout << "'" << numChars << "' chracter displayed " << endl;

	return 0;
}