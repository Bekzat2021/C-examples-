// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
using namespace std;

template <typename T>
void DisplayContents(const T &input) {
	for (auto element = input.begin(); element != input.end(); element++)
	{
		cout << *element << ' ' ;
	}
	cout << endl;
}

int main() {

	vector<int> numsInVec{ 10,11,13,18,17,16,20,14 };
	
	DisplayContents(numsInVec);
	sort(numsInVec.begin(),
		numsInVec.end(),
		[](int &num1, int &num2)->bool {return num1 > num2; });

	DisplayContents(numsInVec);

	cout << "Enter a number for adding to vector elements: ";
	int number = 0;
	cin >> number;

	for_each(numsInVec.begin(),
		numsInVec.end(),
		[number](int &vecInt) {vecInt += number; });

	DisplayContents(numsInVec);

	return 0;
}