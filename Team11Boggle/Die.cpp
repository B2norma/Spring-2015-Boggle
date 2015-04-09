#include "Die.h"


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

Die::~Die()
{
}

String^ Die::getRandomLetter() {

	int randomValue = rand() % this->letters->Count;

	return this->letters[randomValue];
}


