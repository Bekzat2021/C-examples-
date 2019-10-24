// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include <string>

template <typename T>
class TestStatic {
public:
	static int staticVal;
};

template <typename T> int TestStatic<T>::staticVal;

int main() {

	TestStatic<int> intInstance;
	std::cout << "Setting static val for intInstance to 2013" << std::endl;
	intInstance.staticVal = 2013;

	TestStatic<double> doubleInstance;
	std::cout << "Setting static val for doubleInstance to 2019" << std::endl;
	doubleInstance.staticVal = 2019;

	std::cout << "intInstance.staticVal = " << intInstance.staticVal << std::endl;
	std::cout << "doubleInstance.staticVal = " << doubleInstance.staticVal << std::endl;

	return 0;
}

