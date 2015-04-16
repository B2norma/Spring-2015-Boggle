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
	List<String^> ^validatedWords;
	void buildWordList();

public:
	WordValidator();
	virtual ~WordValidator();	
	bool validateWord(String^ word);	
	
};

