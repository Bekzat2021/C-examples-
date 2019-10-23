// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

#define SQUARE(x) ( (x) * (x) )
#define PI 3.1416
#define AREA_CIRCLE(r) ( PI * (r) * (r) )
#define MAX(a, b) (( (a) > (b) ) ? (a) : (b))
#define MIN(a, b) (( (a) < (b) ) ? (a) : (b))

int main() {
	cout << "Enter a integer: ";
	int num = 0;
	cin >> num;

	cout << "SQUARE (" << num << ") = " << SQUARE(num) << endl;
	cout << "Area of a circle with radius " << num << " is: ";
	cout<< AREA_CIRCLE(num) << endl;
	
	cout << "Enter anoter integer: ";
	int num2 = 0;
	cin >> num2;

	cout << "MIN (" << num << ", " << num2 << ") = " << MIN(num, num2) << endl;
	cout << "MAX (" << num << ", " << num2 << ") = " << MAX(num, num2) << endl;

	return 0;
}