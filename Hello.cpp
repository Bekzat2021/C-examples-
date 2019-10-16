// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include <string.h>


class MyString {
private:
	char* buffer;

	MyString() {};
	
public:
	MyString(const char* initialString) {
		if (initialString!=NULL)
		{
			buffer = new char[strlen(initialString) + 1];
			strcpy_s(
				buffer,
				strlen(initialString) + 1,
				initialString
				);
		}
		else {
			buffer = NULL;
		}
	}

	MyString(const MyString &copySource) {
		buffer = NULL;
		if (copySource.buffer!=NULL)
		{
			buffer = new char[strlen(copySource.buffer) + 1];

			strcpy_s(
				buffer,
				strlen(copySource.buffer) + 1,
				copySource.buffer
			);
		}
	}

	MyString operator =(const MyString &copySource) {
		if ((this!=&copySource) && (copySource.buffer!=NULL))
		{
			if (buffer!=NULL)
			{
				delete[] buffer;
			}

			buffer = new char[strlen(copySource.buffer) + 1];

			strcpy_s(
				buffer,
				strlen(copySource.buffer) + 1,
				copySource.buffer
			);
		}
	}

	const char& operator[] (int index) const {
		if (index<GetLength())
		{
			return buffer[index];
		}
	}

	~MyString() {
		if (buffer!=NULL)
		{
			delete[] buffer;
		}
	}

	int GetLength() const{
		return strlen(buffer);
	}

	operator const char* () {
		return buffer;
	}
};

int main() {
	
	std::cout << "Type a statement: ";
	std::string strInput;
	getline(std::cin, strInput);

	MyString youSaid(strInput.c_str());

	std::cout << "Using operator[] for displaying your input: " << std::endl;
	for (int index = 0; index < youSaid.GetLength(); index++)
	{
		std::cout << youSaid[index] << " ";
	}
	std::cout << std::endl;

	std::cout << "Enter index 0 - " << youSaid.GetLength() - 1 << ": ";
	int index = 0;
	std::cin >> index;
	std::cout << "Input character at zero-based position: " << index;
	std::cout << " is: " << youSaid[index] << std::endl;

	return 0;
}