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

struct CompareString {
	bool operator () (const string str1, const string str2) {
		string s1 = str1;
		string s2 = str2;
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
		return (s1 > s2);
	}
};

int main() {
	list<string> someWords{ "oNe", "apple", "Two", "Three", "AA", "can", "DDS" };

	cout << "Before case sensetive sort:" << endl;
	DiplayContents(someWords);

	cout << endl << "After simple sort:" << endl;
	someWords.sort();
	DiplayContents(someWords);

	cout << "After case insensitive sort: " << endl;
	sort(someWords.begin(), someWords.end(),  CompareString(str1, str2));

	return 0;
}