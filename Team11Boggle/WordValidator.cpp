#include "WordValidator.h"
#include<string>
#include<iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#using<system.dll>
using namespace System;
using namespace System::IO;
using namespace Collections;
using namespace std;

/**
* Initializes default WordValidator object.
*
* @precondition none
* 
*/
WordValidator::WordValidator()
{
	//this->validWords = gcnew Hashtable();	
	//this->dictionary = gcnew Dictionary<String^, String^>();	
	this->validatedWords = gcnew List<String^>(this->tableSize);	
}

/**
* Destructor called when the lifetime of a WordValidator object ends.
*/
WordValidator::~WordValidator()
{
	
}

bool WordValidator::findWord(String^ aWord){
	int index = wordHash(aWord);
	bool validatedWord = false;
	//String^ word;
	ifstream file("../dictionary.txt");
	
	if (file.good()){
		return true;
	}
	else{
		return false;
	}	
}

int WordValidator::wordHash(String^ hashKey){
	int hashValue = 0;
	for (int i = 0; i < hashKey->Length; i++){
		hashValue = 41 * hashValue + hashKey[i];
	}

		hashValue %= this->tableSize;

		if (hashValue < 0){
			hashValue += tableSize;
		}
		
		return hashValue;
}

String^ WordValidator::validateWord(String^ word){
	this->buildWordList();
	if (this->validatedWords->Contains(word)){
		return word;
	}
	else{
		return "\r\n";
	}
}

void WordValidator::buildWordList(){
	
	string line;
	ifstream dictionaryFile("dictionary.txt");
	if (dictionaryFile.is_open())
	{
		while (getline(dictionaryFile, line))
		{
			String^ aLine = gcnew String(line.c_str());
			this->validatedWords->Add(aLine);
		}		
		
		dictionaryFile.close();
	}			
	
}

