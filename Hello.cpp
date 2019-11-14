// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename T1, typename T2>
void DisplayUnorderedMap(unordered_map<T1, T2>& cont) {
	cout << "Unordered map contains: " << endl;
	for (auto element = cont.cbegin(); element != cont.cend(); element++)
	{
		cout << element->first << " -> " << element->second << endl;
	}

	cout << "Number of pairs, size(): " << cont.size() << endl;
	cout << "Bucket count = " << cont.bucket_count() << endl;
	cout << "Current load factor: " << cont.load_factor() << endl;
	cout << "Max load factor = " << cont.max_load_factor() << endl;
}

int main() {
	unordered_map<int, string> umapIntToStr;
	umapIntToStr.insert(make_pair(1, "One"));
	umapIntToStr.insert(make_pair(45, "Fourty Five"));
	umapIntToStr.insert(make_pair(1001, "Thousand One"));
	umapIntToStr.insert(make_pair(-2, "Minus Two"));
	umapIntToStr.insert(make_pair(-1000, "Minus One Thousand"));
	umapIntToStr.insert(make_pair(100, "One Hundred"));
	umapIntToStr.insert(make_pair(12, "Twelve"));
	umapIntToStr.insert(make_pair(-100, "Minus One Hundred"));

	DisplayUnorderedMap<int, string>(umapIntToStr);


	cout << "\nInsreting one more element" << endl;
	umapIntToStr.insert(make_pair(300, "Three Hundred"));
	DisplayUnorderedMap<int, string>(umapIntToStr);

	cout << "\nEnter key to find for: ";
	int key = 0;
	cin >> key;

	auto element = umapIntToStr.find(key);
	if (element!=umapIntToStr.cend())
	{
		cout << "Found! Key pairs with value " << element->second << endl;
	}
	else {
		cout << "Key has no corresponding pair value!" << endl;
	}

	return 0;
}