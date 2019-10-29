// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <string>
#include <algorithm>
#include <iostream>

int main() {

	std::string str1("Traditional string \0 initialization");
	std::cout << "Str1: " << str1 << " Length: " << str1.length() << std::endl;

	std::string str2("C++14 \0 initialization using literals");
	std::cout << "Str2: " << str2 << " Length: " << str2.length() << std::endl;

	return 0;
}
