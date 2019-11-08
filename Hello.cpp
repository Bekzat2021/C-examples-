// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <unordered_set>

using namespace std;

template <typename T>
void DisplayContents(const T &cont)  {
	for (auto element = cont.cbegin(); element != cont.cend(); element++)
	{
		cout << *element << ' ';
	}
	cout << endl;

}

struct ContactItems
{
private:
	string name;
	string phone;

public:
	ContactItems(string &inputName, string &inputPhone) :name(inputName), phone(inputPhone) {};

	bool operator == (ContactItems &contactToCompare) const {
		return (contactToCompare.phone == this->phone);
	}

	bool operator < (ContactItems &contactToCompare) const {
		return (this->phone < contactToCompare.phone);
	}
};

int main() {

	

	return 0;
}
