// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include <string>

int main() {

	const char* constCStyleString = "Hello String!";
	std::cout << "Constant string is: " << constCStyleString << std::endl;

	std::string strFromConst(constCStyleString);

	std::cout << "strFromConst is: " << strFromConst << std::endl;

	std::string str2("Hello string!");
	std::string str2Copy(str2);

	std::cout << "str2Copy is: " << str2Copy << std::endl;

	std::string partialCopy(constCStyleString, 5);
	std::cout << "strPatialCopy is: " << partialCopy << std::endl;


	std::string strRepeatChars(10, 'b');
	std::cout << "strRepeatChars is: " << strRepeatChars << std::endl;

	return 0;
}
