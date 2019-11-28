// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

int main() {
	using namespace std;

	bitset<8> inputBits;
	cout << "Enter a 8-bit sequence: ";

	cin >> inputBits;

	cout << "Num 1s you supplied: " << inputBits.count() << endl;
	cout << "Num 0s you supplied: " << inputBits.size() - inputBits.count() << endl;

	bitset<8> inputFlipped(inputBits);
	inputFlipped.flip();

	cout << "Flipped version is: " << inputFlipped << endl;

	cout << "Result of AND, OR and XOR between two: " << endl;
	cout << inputBits << " & " << inputFlipped << " = ";
	cout << (inputBits&inputFlipped) << endl;

	cout << inputBits << " | " << inputFlipped << " = ";
	cout << (inputBits | inputFlipped) << endl;

	cout << inputBits << " ^ " << inputFlipped << " = ";
	cout << (inputBits ^ inputFlipped) << endl;

	return 0;

}