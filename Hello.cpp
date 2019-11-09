// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <set>
#include <string>

using namespace std;

template <typename T>
void DisplayContents(const T &cont)  {
	for (auto element = cont.cbegin(); element != cont.cend(); element++)
	{
		cout << *element << ' ' << endl;;
	}
	cout << endl;
}

struct Dictionary
{
	string word;
	string meaning;
	string displayAs;

public:
	Dictionary(const string &inputWord, const string &inputMeaning) {
		word = inputWord;
		meaning = inputMeaning;
		displayAs = word + ": " + meaning;
	}

	bool operator < (const Dictionary &dic) const {
		return (this->word < dic.word);
	}

	bool operator == (const Dictionary &dic) const {
		return (this->displayAs == dic.displayAs);
	}

	operator const char* () const {
		return displayAs.c_str();
	}
};

int main() {

	multiset<Dictionary> Dict1;
	Dict1.insert(Dictionary("car", "land transport"));
	Dict1.insert(Dictionary("Canada", "country in north america"));
	Dict1.insert(Dictionary("cat", "small animal"));
	Dict1.insert(Dictionary("cat", "small animal"));

	DisplayContents(Dict1);

	set<Dictionary> Dict2;
	Dict2.insert(Dictionary("car", "land transport"));
	Dict2.insert(Dictionary("Canada", "country in north america"));
	Dict2.insert(Dictionary("cat", "small animal"));
	Dict2.insert(Dictionary("cat", "small animal"));

	DisplayContents(Dict2);

	return 0;
}
