// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>

int main() {

	std::string sampleStr("Good day String! Today is beautiful!");
	std::cout << "Sample string is: " << sampleStr << std::endl << std::endl;

	size_t charPos = sampleStr.find("day", 0);

	if (charPos!=std::string::npos)
	{
		std::cout << "First instance \"day\" at pos. " << charPos << std::endl;
	}
	else 
	{
		std::cout << "Substring not found!" << std::endl;
	}

	std::cout << "Locating all instances of substring \"day\"" << std::endl;
	size_t subStrPos = sampleStr.find("day", 0);

	while (subStrPos!=std::string::npos)
	{
		std::cout << "\"day\" found at position " << subStrPos << std::endl;

		size_t searchOffset = subStrPos + 1;

		subStrPos = sampleStr.find("day", searchOffset);
	}

	return 0;
}
