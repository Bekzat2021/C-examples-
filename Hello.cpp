// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename T>
void DisplayContetnts(const T &cont) {
	for (auto element = cont.cbegin(); element != cont.cend(); element++)
	{
		cout << element->first << " - > " << element->second << endl;
	}
	cout << endl;
}

struct PredIgnoreCase
{
	bool operator()(const string &str1, const string &str2) const {
		string str1NoCase(str1), str2NoCase(str2);
		transform(str1.begin(), str1.end(), str1NoCase.begin(), ::tolower);
		transform(str2.begin(), str2.end(), str2NoCase.begin(), ::tolower);

		return (str1NoCase < str2NoCase);
	}
};

typedef map<string, string> DIR_WITH_CASE;
typedef map<string, string, PredIgnoreCase> DIR_NOCASE;

int main() {

	DIR_WITH_CASE dirWithCase;

	dirWithCase.insert(make_pair("John", "2345764"));
	dirWithCase.insert(make_pair("JOHN", "2345764"));
	dirWithCase.insert(make_pair("Sara", "42367236"));
	dirWithCase.insert(make_pair("Jack", "32435348"));

	cout << "Displaying content of the case-sensetive map: " << endl;
	DisplayContetnts(dirWithCase);

	DIR_NOCASE dirNoCase(dirWithCase.begin(), dirWithCase.end());

	cout << "Displaying contents of the case-insensitive map: " << endl;
	DisplayContetnts(dirNoCase);

	cout << "Please enter a name to search" << endl << "> ";
	string name;
	cin >> name;

	map<string, string>::iterator pairWithCase = dirWithCase.find(name);
	if (pairWithCase!=dirWithCase.end())
	{
		cout << "Num in case-sens. dir: " << pairWithCase->second << endl;
	}
	else {
		cout << "Num not found in case-sensetive dir" << endl;
	}

	map<string, string>::iterator pairNoCase = dirNoCase.find(name);
	if (pairNoCase!=dirNoCase.end())
	{
		cout << "Num found in CI dir: " << pairNoCase->second << endl;
	}
	else {
		cout << "Num not found in case-sensetive dirictory" << endl;
	}

	return 0;
}