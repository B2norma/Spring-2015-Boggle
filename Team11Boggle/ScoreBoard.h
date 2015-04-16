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
	public:
		ScoreBoard(List<String^>^);
		~ScoreBoard();
		

	private: 
		List<String^> ^words;

		void setWordColumn();
		void setScoreColumn();
		int getWordScore(String^);

	private: System::Windows::Forms::DataGridView^  scoreBoardGridView;


	    System::Windows::Forms::DataGridViewTextBoxColumn^  wordColumn;
	    System::Windows::Forms::DataGridViewTextBoxColumn^  scoreColumn;
	    System::Windows::Forms::DataGridViewTextBoxColumn^  totalColumn;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->totalColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreBoardGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// scoreBoardGridView
			// 
			this->scoreBoardGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->scoreBoardGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->wordColumn,
					this->scoreColumn, this->totalColumn
			});
			this->scoreBoardGridView->Location = System::Drawing::Point(12, 12);
			this->scoreBoardGridView->Name = L"scoreBoardGridView";
			this->scoreBoardGridView->Size = System::Drawing::Size(489, 283);
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
			// totalColumn
			// 
			this->totalColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->totalColumn->HeaderText = L"Total Score";
			this->totalColumn->Name = L"totalColumn";
			this->totalColumn->ReadOnly = true;
			this->totalColumn->Width = 87;
			// 
			// ScoreBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 307);
			this->Controls->Add(this->scoreBoardGridView);
			this->Name = L"ScoreBoard";
			this->Text = L"ScoreBoard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreBoardGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
