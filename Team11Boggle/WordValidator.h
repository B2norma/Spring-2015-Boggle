#pragma once

#include<algorithm>
#include<string>

using namespace System::Collections::Generic;
using namespace System;
using namespace System::Collections;
using namespace std;

ref class WordValidator
{
private:
	static const int tableSize = 172819;
	Dictionary<String^, String^> ^dictionary;

public:
	WordValidator();
	virtual ~WordValidator();	
	Hashtable^ validWords;
	bool findWord(String^ aWord);
	int wordHash(String^ hashKey);
	String^ validateWord(String^ word);	
	List<String^> ^validatedWords;
	void buildWordList();
};

