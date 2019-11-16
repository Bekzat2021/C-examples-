// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

class CompareStringNoCase {
public:
	bool operator()(const string &str1, const string &str2) const {
		string str1ToLowerCase;
		str1ToLowerCase.resize(str1.size());

		transform(str1.begin(), str1.end(), str1ToLowerCase.begin(), ::towlower);

		string str2ToLowerCase;
		str2ToLowerCase.resize(str2.size());

		transform(str2.begin(), str2.end(), str2ToLowerCase.begin(), ::towlower);

		return (str1ToLowerCase < str2ToLowerCase);
	}
};

template <typename T>
void DisplayContents(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << endl;
	}
}

int main() {

	vector <string> names;

	names.push_back("jim");
	names.push_back("Jack");
	names.push_back("Sam");
	names.push_back("Anna");

	cout << "The names in vector in order of insertion: " << endl;
	DisplayContents(names);

	cout << "Names after sorting using default std::less<>: " << endl;
	sort(names.begin(), names.end());
	DisplayContents(names);

	cout << "Sorting using predicate that ignores case: " << endl;
	sort(names.begin(), names.end(), CompareStringNoCase());
	DisplayContents(names);

	return 0;
}