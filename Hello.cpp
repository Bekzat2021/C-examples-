// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
using namespace std;

int main() {
	
	bitset<4> BitsetA("0110");
	bitset<4> BitsetB("1000");

	cout <<"A: "<< BitsetA << endl;
	cout <<"B: "<< BitsetB << endl;

	bitset<4> BitsetC(BitsetA | BitsetB);
	cout << "|: " << BitsetC << endl;

	cout << "F: " << BitsetC.flip() << endl;

	return 0;
}