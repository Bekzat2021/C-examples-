// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

int main() {
	using namespace std;
	
	priority_queue<int> numsInPrioQ;

	priority_queue<double> dblsInProQ;

	priority_queue<int, deque<int>, greater<int>> numsInDescendingQ;

	priority_queue<int> copyQ(numsInPrioQ);

	return 0;
}