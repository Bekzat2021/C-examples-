// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename T1>
void DisplayMap(T1& cont) {
	cout << "Map contains: " << endl;
	for (auto element = cont.cbegin(); element != cont.cend(); element++)
	{
		cout << element->first << " - > " << element->second << endl;
	}
}

struct WordProperty
{
	string word;
	bool isLatinBase;
};

struct fPredicate
{
	bool operator () (const WordProperty& lhs, const WordProperty& rhs) const {
		return (lhs.word < rhs.word);
	}
};

int main() {
	multimap<string, string> phoneBook;

	phoneBook.insert(make_pair("John", "548536"));
	phoneBook.insert(make_pair("Smith", "253698"));
	phoneBook.insert(make_pair("Smith", "253698"));
	phoneBook.insert(make_pair("Bob", "785693"));
	phoneBook.insert(make_pair("Ken", "359472"));
	phoneBook.insert(make_pair("Ken", "359472"));
	
	cout << "Content of multimap: " << endl;
	DisplayMap(phoneBook);

	cout << "\n****\n" << endl;

	map<string, string> phoneBook2;

	phoneBook2.insert(make_pair("John", "548536"));
	phoneBook2.insert(make_pair("Smith", "253698"));
	phoneBook2.insert(make_pair("Smith", "253698"));
	phoneBook2.insert(make_pair("Bob", "785693"));
	phoneBook2.insert(make_pair("Ken", "359472"));
	phoneBook2.insert(make_pair("Ken", "359472"));

	cout << "Content of map: " << endl;
	DisplayMap(phoneBook2);

	return 0;
}