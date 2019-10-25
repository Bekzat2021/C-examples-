// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
using namespace std;

template <typename T>
class EverythingButInt {
public:
	EverythingButInt() {
		static_assert(sizeof(T) != sizeof(int), "No int please!");
	}
};

int main() {
	EverythingButInt<double> Test;
	
	return 0;
}

