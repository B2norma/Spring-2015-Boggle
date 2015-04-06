#pragma once

#include<string>

using namespace std;

ref class WordValidator
{
private:

public:
	WordValidator();
	virtual ~WordValidator();
	bool search(string word);
};

