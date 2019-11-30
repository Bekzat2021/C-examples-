// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

int main() {
	
	cout << "Enter your name: ";
	string name;
	getline(cin, name);
	cout << "Hi " << name << endl;
	

	return 0;
}