// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
using namespace std;

class CustomExpection :public std::exception {
private:
	string reason;
public:
	CustomExpection(const char* why) :reason(why) {};

	virtual const char* what() const throw() {
		return reason.c_str();
	}
};

double Divide(double dividend, double divisor) {
	if (divisor==0)
		throw CustomExpection("CustomExpection: Dividing by 0 is a crime");

	return (dividend / divisor);
}

int main() {
	cout << "Enter dividend: ";
	double dividend = 0;
	cin >> dividend;
	cout << "Enter divisor: ";
	double divisor = 0;
	cin >> divisor;

	try
	{
		cout << "Result is: " << Divide(dividend, divisor);
	}
	catch (exception& exp)
	{
		cout << exp.what() << endl;
		cout << "Sorry can't continue!" << endl;
	}

	return 0;
}