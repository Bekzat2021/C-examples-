// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename T>
void DiplayContents(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << endl;
	}
}

int main() {
	list<string> names{ "John", "Brad", "jack", "sean", "Anna" };

	cout << "Sorted contents of the list are: " << endl;
	names.sort();
	DiplayContents(names);

	cout << "Lower index where \"Brad\" can be inserted is: ";
	auto minPos = lower_bound(names.begin(), names.end(), "Brad");
	cout << distance(names.begin(), minPos) <<endl;

	cout << "Highest index where \"Brad\" can be inserted is: ";
	auto maxPos = upper_bound(names.begin(), names.end(), "Brad");
	cout << distance(names.begin(), maxPos) << endl;

	cout << endl;

	cout << "List after inserting Brad in sorted order: " << endl;
	names.insert(minPos, "Brad");
	DiplayContents(names);

	return 0;
}