#include "BoggleForm.h"
#include "WordValidator.h"
#include<cmath>
#include<iostream>
#include <fstream>

using namespace std;
using namespace System;
using namespace Team11Boggle;

	BoggleForm::BoggleForm(void)
	{
		this->validWord = "";
		this->buttons = gcnew List<Button^>(16);
		this->letters = gcnew List<String^>();
		this->words = gcnew List<String^>();		
		srand(time(0));
		InitializeComponent();
		this->resourceManager = gcnew Resources::ResourceManager(L"Team11Boggle.OutputStrings", this->GetType()->Assembly);
		this->submitButton->Text = this->resourceManager->GetString(L"AddButtonText");
		this->spinButton->Text = this->resourceManager->GetString(L"SpinButtonText");
		this->quitButton->Text = this->resourceManager->GetString(L"QuitButtonText");
		this->viewScoresButton->Text = this->resourceManager->GetString(L"ViewScoreButtonText");
		this->startButton->Text = this->resourceManager->GetString(L"StartButtonText");
		this->Text = this->resourceManager->GetString(L"FormTitle");
		this->buildButtonList();
		this->disableAllLetters();
		this->submitButton->Enabled = false;
		this->spinButton->Enabled = false;
	}


	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	BoggleForm::~BoggleForm()
	{
		if (components)
		{
			delete components;
		}
	}

	void BoggleForm::submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
				
		this->buildValidWordList();
		this->printWordsInTextBox();
		this->letters->Clear();
		this->spinButton->Enabled = true;
		this->enableAllLetters();
	}

	void BoggleForm::Timer_Tick(System::Object^  sender, System::EventArgs^  e) {

		this->seconds--;
		this->sec = Convert::ToString(this->seconds);
		this->min = Convert::ToString(this->minutes);
		GameTimer->Text = this->min + ":" + this->sec;

		if (this->minutes == 0 && this->seconds == 0){
			GameTimer->Text = "0:00";
			Timer->Stop();
			this->displayScoreBoard();
		}
		else if (this->seconds == 0)
		{
			this->seconds = 59;
			this->minutes--;
		}

	}

	void BoggleForm::resetTimer(){
		this->Timer->Enabled = false;
		GameTimer->Text = "0:10";
		this->seconds = 10;
		this->minutes = 0;
	}

	void BoggleForm::setupGameBoard(){

		this->words->Clear();
		this->validWordBox->Text = "";
		this->populateRandomLetters();
		this->enableAllLetters();
		this->spinButton->Enabled = true;
		this->submitButton->Enabled = true;
		this->resetTimer();
	}
		

	void BoggleForm::onStartClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->setupGameBoard();
		this->Timer->Start();
		
	}

	void BoggleForm::buildButtonList(){

		this->buttons->Add(this->button1);
		this->buttons->Add(this->button2);
		this->buttons->Add(this->button3);
		this->buttons->Add(this->button4);
		this->buttons->Add(this->button5);
		this->buttons->Add(this->button6);
		this->buttons->Add(this->button7);
		this->buttons->Add(this->button8);
		this->buttons->Add(this->button9);
		this->buttons->Add(this->button10);
		this->buttons->Add(this->button11);
		this->buttons->Add(this->button12);
		this->buttons->Add(this->button13);
		this->buttons->Add(this->button14);
		this->buttons->Add(this->button15);
		this->buttons->Add(this->button16);

	}

	void BoggleForm::populateRandomLetters(){

		DiceBag^ diceBag = gcnew DiceBag();

		this->button1->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button2->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button3->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button4->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button5->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button6->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button7->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button8->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button9->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button10->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button11->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button12->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button13->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button14->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button15->Text = diceBag->getRandomDie()->getRandomLetter();
		this->button16->Text = diceBag->getRandomDie()->getRandomLetter();
	}

	void BoggleForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button1->Text);
		
		this->button1->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button2->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button2->Text);

		this->button2->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button1->Enabled = true;
		this->button3->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button3->Text);

		this->button3->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button2->Enabled = true;
		this->button4->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button4->Text);

		this->button4->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button3->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button5->Text);

		this->button5->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button6->Enabled = true;
		this->button9->Enabled = true;
		this->button10->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button6->Text);

		this->button6->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button5->Enabled = true;
		this->button7->Enabled = true;
		this->button9->Enabled = true;
		this->button10->Enabled = true;
		this->button11->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button7_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button7->Text);

		this->button7->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->button6->Enabled = true;
		this->button8->Enabled = true;
		this->button10->Enabled = true;
		this->button11->Enabled = true;
		this->button12->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button8_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button8->Text);

		this->button8->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->button7->Enabled = true;
		this->button11->Enabled = true;
		this->button12->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button9_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button9->Text);

		this->button9->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button10->Enabled = true;
		this->button13->Enabled = true;
		this->button14->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button10_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button10->Text);

		this->button10->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button9->Enabled = true;
		this->button11->Enabled = true;
		this->button13->Enabled = true;
		this->button14->Enabled = true;
		this->button15->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button11_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button11->Text);

		this->button11->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button10->Enabled = true;
		this->button12->Enabled = true;
		this->button14->Enabled = true;
		this->button15->Enabled = true;
		this->button16->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button12_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button12->Text);

		this->button12->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button11->Enabled = true;
		this->button15->Enabled = true;
		this->button16->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button13_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button13->Text);

		this->button13->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button9->Enabled = true;
		this->button10->Enabled = true;
		this->button14->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button14_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button14->Text);

		this->button14->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button9->Enabled = true;
		this->button10->Enabled = true;
		this->button11->Enabled = true;
		this->button13->Enabled = true;
		this->button15->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button15_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button15->Text);

		this->button15->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button10->Enabled = true;
		this->button11->Enabled = true;
		this->button12->Enabled = true;
		this->button14->Enabled = true;
		this->button16->Enabled = true;

		this->disableAllBlueLetters();
	}

	void BoggleForm::button16_Click(System::Object^ sender, System::EventArgs^ e) {

		this->spinButton->Enabled = false;

		this->letters->Add(this->button16->Text);

		this->button16->BackColor = BackColor.Aqua;

		this->disableAllLetters();

		this->button11->Enabled = true;
		this->button12->Enabled = true;
		this->button15->Enabled = true;

		this->disableAllBlueLetters();
	}
		

	

	void BoggleForm::spinButton_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ die1 = this->button1->Text;
		String^ die2 = this->button2->Text;
		String^ die3 = this->button3->Text;
		String^ die4 = this->button4->Text;
		String^ die5 = this->button5->Text;
		String^ die6 = this->button6->Text;
		String^ die7 = this->button7->Text;
		String^ die8 = this->button8->Text;
		String^ die9 = this->button9->Text;
		String^ die10 = this->button10->Text;
		String^ die11 = this->button11->Text;
		String^ die12 = this->button12->Text;
		String^ die13 = this->button13->Text;
		String^ die14 = this->button14->Text;
		String^ die15 = this->button15->Text;
		String^ die16 = this->button16->Text;


		this->button16->Text = die4;
		this->button15->Text = die8;
		this->button14->Text = die12;
		this->button13->Text = die16;
		this->button12->Text = die3;
		this->button11->Text = die7;
		this->button10->Text = die11;
		this->button9->Text = die15;
		this->button8->Text = die2;
		this->button7->Text = die6;
		this->button6->Text = die10;
		this->button5->Text = die14;
		this->button4->Text = die1;
		this->button3->Text = die5;
		this->button2->Text = die9;
		this->button1->Text = die13;
	}

	void BoggleForm::enableAllLetters(){

		for each  (Button^ button in this->buttons)
		{
			button->Enabled = true;
			button->BackColor = BackColor.LightGray;
		}
	}

	void BoggleForm::disableAllLetters(){

		for each  (Button^ button in this->buttons)
		{
			button->Enabled = false;
		}
	}

	void BoggleForm::disableAllBlueLetters(){

		for each  (Button^ button in this->buttons)
		{
			if (button->BackColor == BackColor.Aqua) {

				button->Enabled = false;
			}
		}
	}

	String^ BoggleForm::buildWord(){
		WordValidator wordValidator;
		String^ word = gcnew String("");

		for each (String^ letter in this->letters)
		{
			word += letter;
		}
		return word;		
	}

	void BoggleForm::buildValidWordList(){
		WordValidator wordValidator;
		String^ wordToValidate = this->buildWord();

		if (wordValidator.validateWord(wordToValidate) == true
			&& this->words->Contains(wordToValidate) == false &&
			wordToValidate->Length > 2){
			this->words->Add(wordToValidate);
		}		
	}


	void BoggleForm::printWordsInTextBox(){

		this->validWordBox->Text = "";

		for each (String^ word in this->words)
		{
			this->validWordBox->Text += word + "\r\n";
		}
	}

	void BoggleForm::displayScoreBoard() {

		ScoreBoard^ scoreBoard = gcnew ScoreBoard(this->words);
		scoreBoard->Show();
	}

	void BoggleForm::quitButton_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();
	}
		
	
