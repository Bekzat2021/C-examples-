// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {

	cout << "What do you want to do \n ";
	cout << "1: check word to polindrome \n";
	cout << "2: vowels in sentence \n";
	int userSelection = 0;
	cin >> userSelection;

	switch (userSelection)
	{
	case 1:{
		unsigned char userRepeatPolindrome = 'y';
		while (userRepeatPolindrome =='y')
		{
			cout << "Enter a word: ";
			string inputWord;
			cin >> inputWord;

			string reversedWord = inputWord;

			reverse(reversedWord.begin(), reversedWord.end());

			if (reversedWord == inputWord)
			{
				cout << "Congragulations word is polindrome!" << endl;
			}
			else
			{
				cout << "Input word is not polindrome " << endl;
			}
			
			cout << "Do you want to repeat opeartaion (y/n) ?" << endl;
			cout << "> ";
			cin >> userRepeatPolindrome;	
		}	
		break;
	}
	case 2: {
		cout << "Enter a sentence: ";
		string wowSentence;
		cin >> wowSentence;


	}
		
	default:
		break;
	}

	

	return 0;
}