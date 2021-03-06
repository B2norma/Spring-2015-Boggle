#include "WordValidator.h"

namespace model {

#pragma region Constructors

	/**
	* Initializes default WordValidator object.
	*
	* @precondition none
	*
	*/
	WordValidator::WordValidator()
	{

		this->validatedWords = gcnew List<String^>(this->tableSize);
	}

#pragma endregion

#pragma region Destructors

	/**
	* Destructor called when the lifetime of a WordValidator object ends.
	*/
	WordValidator::~WordValidator()
	{

	}

#pragma endregion

#pragma region Functions

	/// <summary>
	/// Validates the word by checking it against a dictionary.
	/// </summary>
	/// <param name="word">The word to check.</param>
	/// <returns>bool - true for valid words false for invalid words</returns>
	bool WordValidator::validateWord(String^ word){
		this->buildWordList();

		if (this->validatedWords->Contains(word->ToLower())){
			return true;
		}
		else{
			return false;
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

#pragma endregion

}

