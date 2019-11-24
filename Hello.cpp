// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
using namespace std;

template <typename T>
void DisplayContent(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << ' ';
	}
	cout << "| Number of elements: " << container.size() << endl;
}

int main() {
	
	list<int> numsInList{ 2017, 0, -1, 42, 10101, 25 };

	cout << "Source (list) contains: " << endl;
	DisplayContent(numsInList);
	
	vector<int> numsInVec(numsInList.size() * 2);

	auto lastElement = copy(numsInList.cbegin(),
		numsInList.cend(),
		numsInVec.begin());

	copy_if(numsInList.cbegin(), numsInList.cend(), lastElement,
		[](int element) {return ((element % 2) != 0); });

	cout << "Destination vector after copy and copy_if: " << endl;
	DisplayContent(numsInVec);

	auto newEnd = remove(numsInVec.begin(), numsInVec.end(), 0);
	numsInVec.erase(newEnd, numsInVec.end());

	newEnd = remove_if(numsInVec.begin(), numsInVec.end(),
		[](int element) {return ((element % 2) != 0); });

	numsInVec.erase(newEnd, numsInVec.end());

	cout << "Destination (vector) after remove, remove_if, erase:  " << endl;
	DisplayContent(numsInVec);

	return 0;
}