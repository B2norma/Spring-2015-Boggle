#pragma once

#include "DiceBag.h"
#include "ScoreBoard.h"
#include "WordValidator.h"
#include<vector>
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Resources;
using namespace model;

namespace Team11Boggle {

	public ref class BoggleForm : public Form
	{		

	private:
		static int seconds = 60;
		static int minutes = 2;

		List<Button^> ^buttons;
		List<String^> ^letters;
		List<String^> ^words;

		String^ sec;
		String^ min;

		TextBox^  validWordBox;

	    Button^  button1;
	    Button^  button2;
	    Button^  button3;
	    Button^  button4;
	    Button^  button5;
	    Button^  button6;
	    Button^  button7;
	    Button^  button8;
	    Button^  button9;
	    Button^  button10;
	    Button^  button11;
	    Button^  button12;
	    Button^  button13;
	    Button^  button14;
	    Button^  button15;
	    Button^  button16;
	    Button^  startButton;
		Button^  submitButton;
		Button^  quitButton;
		Button^  viewScoresButton;
		Button^  spinButton;

		ResourceManager^ resourceManager;

		FlowLayoutPanel^  flowLayoutPanel1;

	    IContainer^  components;

		System::Windows::Forms::Timer^  Timer;
		System::Windows::Forms::Label^  GameTimer;

		void button1_Click(Object^  sender, EventArgs^  e);
		void button2_Click(Object^  sender, EventArgs^  e);
		void button3_Click(Object^  sender, EventArgs^  e);
		void button4_Click(Object^  sender, EventArgs^  e);
		void button5_Click(Object^  sender, EventArgs^  e);
		void button6_Click(Object^  sender, EventArgs^  e);
		void button7_Click(Object^  sender, EventArgs^  e);
		void button8_Click(Object^  sender, EventArgs^  e);
		void button9_Click(Object^  sender, EventArgs^  e);
		void button10_Click(Object^  sender, EventArgs^  e);
		void button11_Click(Object^  sender, EventArgs^  e);
		void button12_Click(Object^  sender, EventArgs^  e);
		void button13_Click(Object^  sender, EventArgs^  e);
		void button14_Click(Object^  sender, EventArgs^  e);
		void button15_Click(Object^  sender, EventArgs^  e);
		void button16_Click(Object^  sender, EventArgs^  e);
		void submitButton_Click(Object^  sender, EventArgs^  e);
		void spinButton_Click(Object^  sender, EventArgs^  e);
		void Timer_Tick(Object^  sender, EventArgs^  e);
	    void quitButton_Click(Object^  sender, EventArgs^  e);
		void onStartClick(Object^  sender, Windows::Forms::MouseEventArgs^  e);		
	
		String^ buildWord();
		void populateRandomLetters();
		void resetTimer();
	    void buildButtonList();
	    void enableAllLetters();
	    void disableAllLetters();
	    void disableAllBlueLetters();
		void colorAllLettersLightGray();
	    void setupGameBoard();
	    void printWordsInTextBox();
	    void buildValidWordList();
	    void displayScoreBoard();		
	        
	public:
		BoggleForm(void);	
		~BoggleForm();	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->GameTimer = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->validWordBox = (gcnew System::Windows::Forms::TextBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->spinButton = (gcnew System::Windows::Forms::Button());
			this->quitButton = (gcnew System::Windows::Forms::Button());
			this->viewScoresButton = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button9);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->flowLayoutPanel1->Controls->Add(this->button11);
			this->flowLayoutPanel1->Controls->Add(this->button12);
			this->flowLayoutPanel1->Controls->Add(this->button13);
			this->flowLayoutPanel1->Controls->Add(this->button14);
			this->flowLayoutPanel1->Controls->Add(this->button15);
			this->flowLayoutPanel1->Controls->Add(this->button16);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(325, 324);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BoggleForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(84, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BoggleForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::LightGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(165, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BoggleForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::LightGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(246, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 75);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BoggleForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(3, 84);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BoggleForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightGray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(84, 84);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &BoggleForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightGray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(165, 84);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &BoggleForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightGray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(246, 84);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 75);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &BoggleForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(3, 165);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &BoggleForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(84, 165);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 75);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &BoggleForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightGray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(165, 165);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 75);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &BoggleForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightGray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(246, 165);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 75);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &BoggleForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(3, 246);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 75);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &BoggleForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightGray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(84, 246);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 75);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &BoggleForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::LightGray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(165, 246);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 75);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &BoggleForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightGray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(246, 246);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 75);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &BoggleForm::button16_Click);
			// 
			// Timer
			// 
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &BoggleForm::Timer_Tick);
			// 
			// GameTimer
			// 
			this->GameTimer->AutoSize = true;
			this->GameTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameTimer->Location = System::Drawing::Point(374, 15);
			this->GameTimer->Name = L"GameTimer";
			this->GameTimer->Size = System::Drawing::Size(71, 33);
			this->GameTimer->TabIndex = 2;
			this->GameTimer->Text = L"3:00";
			this->GameTimer->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(480, 51);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(109, 39);
			this->startButton->TabIndex = 3;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &BoggleForm::Timer_Tick);
			this->startButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::onStartClick);
			// 
			// validWordBox
			// 
			this->validWordBox->Location = System::Drawing::Point(355, 51);
			this->validWordBox->Multiline = true;
			this->validWordBox->Name = L"validWordBox";
			this->validWordBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->validWordBox->Size = System::Drawing::Size(119, 282);
			this->validWordBox->TabIndex = 5;
			// 
			// submitButton
			// 
			this->submitButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->submitButton->ForeColor = System::Drawing::SystemColors::Control;
			this->submitButton->Location = System::Drawing::Point(177, 342);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(160, 63);
			this->submitButton->TabIndex = 6;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &BoggleForm::submitButton_Click);
			// 
			// spinButton
			// 
			this->spinButton->Location = System::Drawing::Point(12, 342);
			this->spinButton->Name = L"spinButton";
			this->spinButton->Size = System::Drawing::Size(159, 63);
			this->spinButton->TabIndex = 7;
			this->spinButton->Text = L"Spin";
			this->spinButton->UseVisualStyleBackColor = true;
			this->spinButton->Click += gcnew System::EventHandler(this, &BoggleForm::spinButton_Click);
			// 
			// quitButton
			// 
			this->quitButton->Location = System::Drawing::Point(480, 367);
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(109, 38);
			this->quitButton->TabIndex = 8;
			this->quitButton->Text = L"Quit";
			this->quitButton->UseVisualStyleBackColor = true;
			this->quitButton->Click += gcnew System::EventHandler(this, &BoggleForm::quitButton_Click);
			// 
			// viewScoresButton
			// 
			this->viewScoresButton->Location = System::Drawing::Point(480, 96);
			this->viewScoresButton->Name = L"viewScoresButton";
			this->viewScoresButton->Size = System::Drawing::Size(109, 38);
			this->viewScoresButton->TabIndex = 9;
			this->viewScoresButton->Text = L"View Scores";
			this->viewScoresButton->UseVisualStyleBackColor = true;
			// 
			// BoggleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(594, 417);
			this->Controls->Add(this->viewScoresButton);
			this->Controls->Add(this->quitButton);
			this->Controls->Add(this->spinButton);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->validWordBox);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->GameTimer);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"BoggleForm";
			this->Text = L"Boggle by Tim Bergquist and Bradley Norman";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	

};
}

