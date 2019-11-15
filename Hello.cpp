// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename elementType>
class MultiplyTwo {
public:
	elementType operator () (const elementType &elem1, const elementType &elem2 ) {
		return (elem1 * elem2);
	}
};

int main() {

	vector<int> multiplicands{ 0, 1, 2, 3, 4 };
	vector<int> multipliers{ 100, 101, 102, 103, 104 };

	vector<int> vecResult;

	vecResult.resize(multipliers.size());

	transform(multiplicands.begin(),
		multiplicands.end(),
		multipliers.begin(),
		vecResult.begin(),
		MultiplyTwo<int>());

	cout << "The contents of the first vector are: " << endl;
	for (size_t index = 0; index < multiplicands.size(); index++)
	{
		cout << multiplicands[index] << ' ';
	}
	cout << endl;

	cout << "The contents of the second vector are: " << endl;
	for (size_t index = 0; index < multipliers.size(); index++)
	{
		cout << multipliers[index] << ' ';
	}
	cout << endl;

	cout << "The result of multiplication is: " << endl;
	for (size_t index = 0; index < vecResult.size(); index++)
	{
		cout << vecResult[index] << ' ';
	}
	cout << endl;

	return 0;
}