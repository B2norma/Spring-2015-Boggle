#include "DiceBag.h"


DiceBag::DiceBag()
{

	this->dice = gcnew List<Die^>(16);
	this->fillDiceBag();
}

DiceBag::~DiceBag()
{

}

    Die^ DiceBag::getRandomDie() {

	int randomValue = rand() % this->dice->Count;

	Die^ randomDie = this->dice[randomValue];

	this->dice->RemoveAt(randomValue);

	return randomDie;
}

void DiceBag::fillDiceBag() {

	Die^ die0 = gcnew Die("R", "I", "F", "O", "B", "X");
	Die^ die1 = gcnew Die("I", "F", "E", "H", "E", "Y");
	Die^ die2 = gcnew Die("D", "E", "N", "O", "W", "S");
	Die^ die3 = gcnew Die("U", "T", "O", "K", "N", "D");
	Die^ die4 = gcnew Die("H", "M", "S", "R", "A", "O");
	Die^ die5 = gcnew Die("L", "U", "P", "E", "T", "S");
	Die^ die6 = gcnew Die("A", "C", "I", "T", "O", "A");
	Die^ die7 = gcnew Die("Y", "L", "G", "K", "U", "E");
	Die^ die8 = gcnew Die("Qu", "B", "M", "J", "O", "A");
	Die^ die9 = gcnew Die("E", "H", "I", "S", "P", "N");
	Die^ die10 = gcnew Die("V", "E", "T", "I", "G", "N");
	Die^ die11 = gcnew Die("B", "A", "L", "I", "Y", "T");
	Die^ die12 = gcnew Die("E", "Z", "A", "V", "N", "D");
	Die^ die13 = gcnew Die("R", "A", "L", "E", "S", "C");
	Die^ die14 = gcnew Die("U", "W", "I", "L", "R", "G");
	Die^ die15 = gcnew Die("P", "A", "C", "E", "M", "D");

	this->dice->Add(die0);
	this->dice->Add(die1);
	this->dice->Add(die2);
	this->dice->Add(die3);
	this->dice->Add(die4);
	this->dice->Add(die5);
	this->dice->Add(die6);
	this->dice->Add(die7);
	this->dice->Add(die8);
	this->dice->Add(die9);
	this->dice->Add(die10);
	this->dice->Add(die11);
	this->dice->Add(die12);
	this->dice->Add(die13);
	this->dice->Add(die14);
	this->dice->Add(die15);
}
