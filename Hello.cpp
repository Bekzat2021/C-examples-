// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

class Person {
public:
	int age;
	bool isFemale;
	Person(int inputAge, bool inputIsFemale) :age(inputAge), isFemale(inputIsFemale) {};

	operator const char *() {
		return (char*)age;
	}
};

int main() {
	using namespace std;
	
	queue<Person> PostOfficeQueue;

	Person personA(25,true);
	Person personB(27,false);
	Person personC(29,true);

	PostOfficeQueue.push(personA);
	cout << PostOfficeQueue.front() << endl;

	return 0;
}