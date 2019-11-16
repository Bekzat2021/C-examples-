// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename T>
class DoubleInputItem {
public:
	int timesUsed;

	DoubleInputItem() {
		timesUsed = 0;
	}

	void operator () ( const T &item)  {
		timesUsed++;
		cout << item * item << ' ';
	}
};

template <typename T>
class SortSomething {
public:
	bool operator () (const T &item1, const T &item2) const{
		return (item1 < item2);
	}
};

template <typename T>
void DisplayContents(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << ' ';
	}
}

int main() {

	vector<int> numbers{  5, 7, 10, 4, 11, 3, 6 };

	DoubleInputItem<int> times;
	times = for_each(numbers.begin(), numbers.end(), DoubleInputItem<int>());

	cout << "\nDoubled used : " << times.timesUsed << " times. "<< endl;
	
	cout << "before sorting: " << endl;
	DisplayContents(numbers);

	cout << "\nAfter sorting: " << endl;
	sort(numbers.begin(), numbers.end(), SortSomething<int>());
	DisplayContents(numbers);
	
	return 0;
}