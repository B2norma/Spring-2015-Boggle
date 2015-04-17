#include "ScoreBoard.h"

namespace Team11Boggle {

#pragma region Constructors

	/// <summary>
	/// A one parameter ScoreBoard Constructor.
	/// </summary>
	///
	///@param words - The list of words to be scored.
	ScoreBoard::ScoreBoard(List<String^>^ words)
	{

		InitializeComponent();

		this->words = words;
		this->totalScore = 0;

		this->scoreBoardGridView->RowCount = this->words->Count;

		this->setWordsAndScores();
		
		this->resourceManager = gcnew Resources::ResourceManager(L"Team11Boggle.OutputStrings", this->GetType()->Assembly);
		this->totalScoreLabel->Text = this->resourceManager->GetString(L"ScoreLabelText");		
		this->scoreColumn->HeaderText = this->resourceManager->GetString(L"ScoreColumnText");
		this->wordColumn->HeaderText = this->resourceManager->GetString(L"WordColumnText");
		this->Text = this->resourceManager->GetString(L"ScoreBoardTitle");
	}

#pragma endregion

#pragma region Destructors

	/// <summary>
	/// The ScoreBoard destructor.
	/// </summary>
	ScoreBoard::~ScoreBoard()
	{
		if (components)
		{
			delete components;
		}
	}

#pragma endregion

#pragma region Functions

	void ScoreBoard::setWordsAndScores() {

		for (int i = 0; i < this->words->Count; i++)
		{
			this->scoreBoardGridView[0, i]->Value = this->words[i];
			this->scoreBoardGridView[1, i]->Value = this->getWordScore(this->words[i]).ToString();
		}

		this->pointsLabel->Text = this->totalScore.ToString();
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

#pragma endregion

}


