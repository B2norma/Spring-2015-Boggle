#pragma once

#include <algorithm>
#include <string>
#include <fstream>

using namespace System::Collections::Generic;
using namespace System;
using namespace System::Collections;
using namespace std;

namespace model {

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
}

