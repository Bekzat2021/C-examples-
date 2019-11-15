// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename numberType>
struct IsMultiple
{
	numberType Divisor;

	IsMultiple(numberType &inputDivisor) {
		Divisor = inputDivisor;
	}

	bool operator()(const numberType &element) const {
		return ((element%Divisor) == 0);
	}
};

int main() {

	return 0;
}