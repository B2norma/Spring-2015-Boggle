#include "Die.h"

namespace model {

#pragma region Constructors

	/// <summary>
	/// A six parameter Constructor to create a Die with one string per side.
	/// </summary>
	///
	///@param one, two, three, four, five, six - strings to go on each side.
	Die::Die(String^ one, String^ two, String^ three, String^ four, String^ five, String^ six)
	{

		this->letters = gcnew List<String^>(6);

		this->letters->Add(one);
		this->letters->Add(two);
		this->letters->Add(three);
		this->letters->Add(four);
		this->letters->Add(five);
		this->letters->Add(six);
	}

#pragma endregion

#pragma region Destructors

	/// <summary>
	/// The Die destructor
	/// </summary>
	Die::~Die()
	{
	}

#pragma endregion

#pragma region Functions

	/// <summary>
	/// Gets a random letter from Die.
	/// </summary>
	/// <returns>A Random Letter.</returns>
	String^ Die::getRandomLetter() {

		int randomValue = rand() % this->letters->Count;

		return this->letters[randomValue];
	}

#pragma endregion

}

