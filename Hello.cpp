// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

using namespace std;

template <typename T>
void DiplayContents(const T &container) {
	for (auto element = container.cbegin(); element != container.cend(); element++)
	{
		cout << *element <<' ';
	}
	cout << endl;
}

struct CompareString {
	bool operator () (const string str1, const string str2) {
		string s1 = str1;
		string s2 = str2;
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
		return (s1 > s2);
	}
};

int main() {
	list<int> numsInList{ 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int> numsInVec{ 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	deque<int> numsInMap;

	numsInMap.resize(numsInVec.size() + numsInList.size());

	cout << "Conents of the list:" << endl;
	DiplayContents(numsInList);

	cout << "Conents of the vector:" << endl;
	DiplayContents(numsInList);

	copy(numsInList.begin(), numsInList.end(), numsInMap.begin());
	cout << "After copy: " << endl;
	DiplayContents(numsInMap);
	
	deque<int>::iterator eight = find(numsInMap.begin(), numsInMap.end(), 8);
	copy(numsInVec.begin(), numsInVec.end(), eight+1);
	cout << "After second copy: " << endl;
	DiplayContents(numsInMap);

	return 0;
}