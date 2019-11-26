// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

int main() {
	using namespace std;

	std::stack<int> numsInStack;

	stack<double> dbslInStack;

	stack<double, vector<double>> doublesStackedInVector;

	std::stack<int> numsInStaclCopy(numsInStack);

	return 0;
}