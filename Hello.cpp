// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

template <typename T>
void DisplayAsContents(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element << ' ';
		cout << endl;
	}
	cout << endl;
}

struct ConstactItem
{
	string name;
	string phone;
	string displayAs;

	ConstactItem(const string &conName, const string &conNum){
		name = conName;
		phone = conNum;
		displayAs = (name + ": " + phone);
	}

	bool operator == (const ConstactItem &itemToCompare) const {
		return (itemToCompare.name == this->name);
	}

	bool operator < (const ConstactItem &itemToCompare) const {
		return (this->displayAs < itemToCompare.displayAs);
	}

	operator const char*() const {
		return displayAs.c_str();
	}
};

bool SortOnPhoneNumber(const ConstactItem &item1, const ConstactItem &item2) {
	return (item1.phone < item2.phone);
}

int main() {

	list< ConstactItem> contacts;
	contacts.push_back(ConstactItem("Jack Welsch", "+1 7889879879"));
	contacts.push_back(ConstactItem("Bill Gates", "+1 97789787998"));
	contacts.push_back(ConstactItem("Angi Merkel", "+49 234565466"));
	contacts.push_back(ConstactItem("Vlad Putin", "+7 66454564797"));
	contacts.push_back(ConstactItem("Dan Creig", "+44 123641976"));

	cout << "List in initial order: " << endl;
	DisplayAsContents(contacts);

	contacts.sort();
	cout << "Sorting in alphabetical order via operator<: " << endl;
	DisplayAsContents(contacts);

	contacts.sort(SortOnPhoneNumber);
	cout << "Sorting in order of phone numbers via predicate: " << endl;
	DisplayAsContents(contacts);

	cout << "Erasing Putin from the list: " << endl;
	contacts.remove(ConstactItem("Vlad Putin", ""));
	DisplayAsContents(contacts);

	return 0;
}

