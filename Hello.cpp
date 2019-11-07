// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <set>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
void DisplayContent(const T &container) {
	for (auto iElement = container.cbegin(); iElement != container.cend(); iElement++)
	{
		cout << *iElement << ' '<< endl;
	}
	cout << endl;
}

struct ContactItem
{
	string name;
	string phoneNum;
	string displayAs;

	ContactItem(const string &nameInit, const string &phone) {
		name = nameInit;
		phoneNum = phone;
		displayAs = (name + ": " + phoneNum);
	}

	bool operator == (const ContactItem &itemToCompare) const {
		return (this->name == itemToCompare.name);
	}

	bool operator < (const ContactItem &itemToCompare) const {
		return (itemToCompare.name > this->name);
	}

	operator const char*() const {
		return displayAs.c_str();
	}
};

int main() {

	set<ContactItem> setContacts;
	setContacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
	setContacts.insert(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
	setContacts.insert(ContactItem("Angi Merkel", "+49 23456 5466"));
	setContacts.insert(ContactItem("Vlad Putin", "+7 6645 4564 797"));
	setContacts.insert(ContactItem("John Travolta", "91 234 4564 789"));
	setContacts.insert(ContactItem("Ben Affleck", "+1 745 641 314"));
	DisplayContent(setContacts);

	cout << "Enter a name you wish to delete: ";
	string inputName;
	getline(cin, inputName);
	
	set<ContactItem>::iterator contactFound = setContacts.find(ContactItem(inputName, ""));

	if (contactFound!=setContacts.cend())
	{
		setContacts.erase(contactFound);
		cout << "Displaying contents after erasing " << inputName << endl;
		DisplayContent(setContacts);
	}
	else {
		cout << "Contact not found" << endl;
	}

	return 0;
}

