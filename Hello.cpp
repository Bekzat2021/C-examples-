// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	cout << "What do you want to do \n";
	cout << "1: Check word to polindrome \n";
	cout << "2: Vowels in sentence \n";
	cout << "3: Convert all characters to uppercase \n";
	cout << "4: Show string \n";
	cout << "5: Show all occurences \n";
	cout << "6: Show all occurences not my implementation \n";

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
		unsigned char userRepeatVow = 'y';
		while (userRepeatVow == 'y')
		{
			cout << "Enter a sentence: ";
			string wowSentence;
			cin >> wowSentence;

			char vowels[5] = { 'e', 'y', 'o', 'a', 'u' };
			int vow = 0;

			for (int j = 0; j < wowSentence.length(); j++)
			{
				for (int i = 0; i < 5; i++)
				{
					if (wowSentence[j] == vowels[i])
					{
						vow++;
					}
				}
			}
		
			cout << "In sentence you was entered " << vow << " vowels" << endl;
			cout << "Do you want to repeat opeartaion (y/n) ?" << endl;
			cout << "> ";
			cin >> userRepeatVow;
		}
	}
	case 3: {
		unsigned char userRepeatToupper = 'y';
		while (userRepeatToupper == 'y')
		{
			cout << "Enter a word: ";
			string str;
			cin >> str;

			transform(str.begin(), str.end(), str.begin(), ::toupper);

			cout << str << endl;

			cout << "Do you want to repeat opeartaion (y/n) ?" << endl;
			cout << "> ";
			cin >> userRepeatToupper;
		}
	}
	case 4: {
		unsigned char userRepeatView = 'y';
		while (userRepeatView == 'y')
		{
			string str1("I");
			string str2("Love");
			string str3("STL");
			string str4("String");

			string str5 = str1 + " " + str2 + " " + str3 + " " + str4;

			cout << str5 << endl;

			cout << "Do you want to repeat opeartaion (y/n) ?" << endl;
			cout << "> ";
			cin >> userRepeatView;
		}
	}
	case 5: {
		unsigned char userRepeatView = 'y';
		while (userRepeatView == 'y')
		{
			string str("Good day String! Today is beautiful!");

			cout << str << endl;
			
			int sum = 0;
			for (int i = 0; i < str.length(); i++)
			{
				if (str[i]=='a')
				{
					sum++;
				}
			}
			cout << "letter a occurenced " << sum << " times" << endl;

			cout << "Do you want to repeat opeartaion (y/n) ?" << endl;
			cout << "> ";
			cin >> userRepeatView;
		}
	}
	case 6: {
		unsigned char userRepeatView = 'y';
		while (userRepeatView == 'y')
		{
			string sampleStr("Good day String! Today is beautiful!");
			cout << "Sample string is: " << sampleStr << endl;
			cout << "Locating all instances of character 'a' " << endl;

			auto charPos = sampleStr.find('a', 0);

			while (charPos!=string::npos)
			{
				cout << "'" << 'a' << " ' found";
				cout << " at position: " << charPos << endl;

				size_t charSearchPos = charPos + 1;

				charPos = sampleStr.find('a', charSearchPos);
			}

			cout << "Do you want to repeat opeartaion (y/n) ?" << endl;
			cout << "> ";
			cin >> userRepeatView;
		}
	}
	default:
		break;
	}

	

	return 0;
}