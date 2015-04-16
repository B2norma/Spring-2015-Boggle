#include "ScoreBoard.h"

using namespace Team11Boggle;

ScoreBoard::ScoreBoard(List<String^>^ words)
{
	InitializeComponent();
	this->words = words;
	this->totalScore = 0;
	this->scoreBoardGridView->RowCount = this->words->Count;
	this->setWordColumn();
}

ScoreBoard::~ScoreBoard()
{
	if (components)
	{
		delete components;
	}
}

int ScoreBoard::getWordScore(String^ word) {

	int score;

	if (word->Length == 3 || word->Length == 4) {

		score = 1;
	}
	else if (word->Length == 5) {

		score = 2;
	}
	else if (word->Length == 6) {

		score = 3;
	}
	else if (word->Length == 7) {

		score = 5;
	}
	else {

		score = 8;
	}

	this->totalScore += score;

	return score;

}

void ScoreBoard::setWordColumn() {

	for (int i = 0; i < this->words->Count; i++)
	{
		this->scoreBoardGridView[0, i]->Value = this->words[i];
		this->scoreBoardGridView[1, i]->Value = this->getWordScore(this->words[i]).ToString();
	}

	this->pointsLabel->Text = this->totalScore.ToString();
}


