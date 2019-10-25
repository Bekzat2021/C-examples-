// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>

using namespace std;

template <typename T1, typename T2>
class TemplateArray {
private:
	T1* firstArray;
	T2* secondArray;

public:
	TemplateArray(T1* firstInput, T2* secondInput):firstArray(firstInput), secondArray(secondInput){}

	void ShowFirstArr() {
		for (T1 f: firstArray)
		{
			cout << f << endl;
		}
	}
};

int main() {
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };

	TemplateArray<int, int> arr(arr, arr2);
	
	return 0;
}

