// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

int main() {
	cout << "Enter number of integers you wish to reserve: ";
	
	try
	{
		int input = 0;
		cin >> input;

		int *numArray = new int[input];
		delete[] numArray;
	}
	catch (std::bad_alloc& exp)
	{
		cout << "Exception encountered: " << exp.what() << endl;
		cout<<"Got to end, sorry!" << endl;
	}
	catch (...) {
		cout << "Exception encountered. Go to end, sorry!" << endl;
	}

	return 0;
}