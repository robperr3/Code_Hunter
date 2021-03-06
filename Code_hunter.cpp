// Code_hunter.cpp : Defines the entry point for the console application.
//This code is supposed to take any string f text, analyze it & report how many vowels, consonants, digits & spaces there are

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;//a string used as avariable for hwatever you write in 
	int foo = 0;// this variable doesnt really do anything
	int vowels = 0;//variable for vowels
	int consonants = 0;//variable for consonants
	int digits = 0;//variable for numbers
	int spaces = 0;//variable for spaces
	int lengthOfStringSubmittedForAnalysis = 0;//length of what you type
	int unknownCharacters = 0;
	int checkSum = 0;//checking sum of characters
	int bar = 0;

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);//getting what you typed

	for (int i = 0; i < textToAnalyze.length(); ++i)//for loop that tracks what you type
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||//chekcing for vowels
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			
			++vowels; //This was the fault. it was "--vowels" instead of ++vowels to count vowels
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))//checks for consonants
		{
			++consonants;//this was also commented out before
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')//checks for numbers
		{
			++digits;//counts numbers
		}
		else if (textToAnalyze[i] == ' ')//checks for spaces
		{
			++spaces;//counts spaces
		}
		else
		{
			++unknownCharacters;//counts unknown characters
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;//all of this checks the length of what you typed
	//all of this displays the results
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}