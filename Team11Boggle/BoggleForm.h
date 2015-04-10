#pragma once

#include "DiceBag.h"

#include<vector>
#include <cstdlib>
#include <ctime>

namespace Team11Boggle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class BoggleForm : public System::Windows::Forms::Form
	{		

	private:
	static int seconds = 60;
	static int minutes = 2;
	String^ sec;
	String^ min;
	array<String^> ^word;
	String^ validWord;
	private: System::Windows::Forms::TextBox^  validWordBox;
	private: System::Windows::Forms::Button^  addWordButton;
	private: System::Windows::Forms::Button^  spinButton;


			 Button^ btn2;

	System::Void addWord(System::Object^  sender, System::EventArgs^  e);	
	System::Void textClick2(System::Object^  sender, System::EventArgs^  e);	
	System::Void onDoubleClick(System::Object^  sender, System::EventArgs^  e);
	System::Void buttonLocation(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	System::Void onClickLetter(System::Object^  sender, System::EventArgs^  e);		

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
			
			 System::Void getWord(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	System::Void Timer_Tick(System::Object^  sender, System::EventArgs^  e);
	System::Void onStartClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	System::Void populateGameBoard();
        
	public:
		BoggleForm(void);		

	protected:
		~BoggleForm();	
	
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Timer^  Timer;
	private: System::Windows::Forms::Label^  GameTimer;
	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->addWordButton = (gcnew System::Windows::Forms::Button());
			this->spinButton = (gcnew System::Windows::Forms::Button());
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
			this->flowLayoutPanel1->Size = System::Drawing::Size(324, 324);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(84, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button2->MouseCaptureChanged += gcnew System::EventHandler(this, &BoggleForm::textClick2);
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(165, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 2;
			this->button3->Tag = L"tag1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(246, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 75);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->EnabledChanged += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button4->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(3, 84);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(84, 84);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(165, 84);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(246, 84);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 75);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button8->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(3, 165);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button9->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(84, 165);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 75);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button10->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(165, 165);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 75);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button11->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(246, 165);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 75);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button12->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(3, 246);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 75);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button13->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(84, 246);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 75);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button14->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(165, 246);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 75);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button15->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(246, 246);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 75);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &BoggleForm::onClickLetter);
			this->button16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::buttonLocation);
			this->button16->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
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
			this->GameTimer->Location = System::Drawing::Point(403, 15);
			this->GameTimer->Name = L"GameTimer";
			this->GameTimer->Size = System::Drawing::Size(71, 33);
			this->GameTimer->TabIndex = 2;
			this->GameTimer->Text = L"3:00";
			this->GameTimer->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(378, 355);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(114, 39);
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
			this->validWordBox->Size = System::Drawing::Size(172, 282);
			this->validWordBox->TabIndex = 5;
			// 
			// addWordButton
			// 
			this->addWordButton->Location = System::Drawing::Point(197, 355);
			this->addWordButton->Name = L"addWordButton";
			this->addWordButton->Size = System::Drawing::Size(116, 39);
			this->addWordButton->TabIndex = 6;
			this->addWordButton->Text = L"Add";
			this->addWordButton->UseVisualStyleBackColor = true;
			this->addWordButton->Click += gcnew System::EventHandler(this, &BoggleForm::addWord);
			this->addWordButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			this->addWordButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::getWord);
			// 
			// spinButton
			// 
			this->spinButton->Location = System::Drawing::Point(35, 355);
			this->spinButton->Name = L"spinButton";
			this->spinButton->Size = System::Drawing::Size(112, 39);
			this->spinButton->TabIndex = 7;
			this->spinButton->Text = L"Spin";
			this->spinButton->UseVisualStyleBackColor = true;
			// 
			// BoggleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 417);
			this->Controls->Add(this->spinButton);
			this->Controls->Add(this->addWordButton);
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

