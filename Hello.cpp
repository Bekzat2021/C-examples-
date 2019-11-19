// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
using namespace std;

template <typename T>
void DisplayContents(const T &input) {
	for (auto element = input.begin(); element != input.end(); element++)
	{
		cout << *element << endl;
	}
}

int main() {

	vector<string> namesInVec{ "jim", "Jack", "Sam", "Anna" };

	cout << "The names in vector in order of insertion: " << endl;
	DisplayContents(namesInVec);

	cout << "Order after case sensetive sort: ";
	sort(namesInVec.begin(), namesInVec.end());
	DisplayContents(namesInVec);

	cout << "Order after case ignoring sort: "<<endl;
	sort(namesInVec.begin(), namesInVec.end(),
		[](const string &str1, const string &str2)->bool {
		string str1LowerCase;
		str1LowerCase.resize(str1.size());

		transform(str1.begin(), str1.end(), str1LowerCase.begin(), ::tolower);

		string str2LowerCase;
		str2LowerCase.resize(str2.size());
		
		transform(str2.begin(), str2.end(), str2LowerCase.begin(), ::tolower);

		return str1LowerCase < str2LowerCase;
	});

	DisplayContents(namesInVec);

	return 0;
}