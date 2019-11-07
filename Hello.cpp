// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <set>
#include <iostream>

using namespace std;

template <typename T>
struct SortDescending
{
	bool operator()(const T &lhs, const T &rhs) const {
		return (lhs > rhs);
	}
};

template <typename T>
void DisplayContent(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << ' ';
	}
	cout << endl;
}

int main() {

	set<int> setInts{ 202, 151, -999, -1 };
	setInts.insert(-1);

	cout << "Contents of the set: " << endl;
	DisplayContent(setInts);

	multiset<int> msetInts;
	msetInts.insert(setInts.cbegin(), setInts.cend());
	msetInts.insert(-1);

	cout << "Contents of multiset: " << endl;
	DisplayContent(msetInts);

	cout << "Number of instances of '-1' in the multiset are: '";
	cout << msetInts.count(-1) << "'" << endl;

	return 0;
}

