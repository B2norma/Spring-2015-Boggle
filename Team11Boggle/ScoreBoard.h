#pragma once

namespace Team11Boggle {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScoreBoard
	/// </summary>
	public ref class ScoreBoard : public System::Windows::Forms::Form
	{
	private:
		int totalScore;

		List<String^> ^words;

		DataGridView^  scoreBoardGridView;

		DataGridViewTextBoxColumn^  wordColumn;
		DataGridViewTextBoxColumn^  scoreColumn;

		System::Windows::Forms::Label^  totalScoreLabel;
		System::Windows::Forms::Label^  pointsLabel;

		System::ComponentModel::Container ^components;

		void setWordsAndScores();
		int getWordScore(String^);

	public:
		ScoreBoard(List<String^>^);
		~ScoreBoard();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->scoreBoardGridView = (gcnew System::Windows::Forms::DataGridView());
			this->wordColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->scoreColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalScoreLabel = (gcnew System::Windows::Forms::Label());
			this->pointsLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreBoardGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// scoreBoardGridView
			// 
			this->scoreBoardGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->scoreBoardGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->wordColumn,
					this->scoreColumn
			});
			this->scoreBoardGridView->Location = System::Drawing::Point(12, 12);
			this->scoreBoardGridView->Name = L"scoreBoardGridView";
			this->scoreBoardGridView->RowHeadersVisible = false;
			this->scoreBoardGridView->Size = System::Drawing::Size(121, 283);
			this->scoreBoardGridView->TabIndex = 0;
			// 
			// wordColumn
			// 
			this->wordColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->wordColumn->HeaderText = L"Word";
			this->wordColumn->Name = L"wordColumn";
			this->wordColumn->ReadOnly = true;
			this->wordColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->wordColumn->Width = 58;
			// 
			// scoreColumn
			// 
			this->scoreColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->scoreColumn->HeaderText = L"Score";
			this->scoreColumn->Name = L"scoreColumn";
			this->scoreColumn->ReadOnly = true;
			this->scoreColumn->Width = 60;
			// 
			// totalScoreLabel
			// 
			this->totalScoreLabel->AutoSize = true;
			this->totalScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalScoreLabel->Location = System::Drawing::Point(139, 12);
			this->totalScoreLabel->Name = L"totalScoreLabel";
			this->totalScoreLabel->Size = System::Drawing::Size(282, 55);
			this->totalScoreLabel->TabIndex = 1;
			this->totalScoreLabel->Text = L"Total Score:";
			// 
			// pointsLabel
			// 
			this->pointsLabel->AutoSize = true;
			this->pointsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pointsLabel->Location = System::Drawing::Point(139, 67);
			this->pointsLabel->Name = L"pointsLabel";
			this->pointsLabel->Size = System::Drawing::Size(0, 55);
			this->pointsLabel->TabIndex = 2;
			// 
			// ScoreBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 307);
			this->Controls->Add(this->pointsLabel);
			this->Controls->Add(this->totalScoreLabel);
			this->Controls->Add(this->scoreBoardGridView);
			this->Name = L"ScoreBoard";
			this->Text = L"ScoreBoard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreBoardGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
