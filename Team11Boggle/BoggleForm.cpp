#include "BoggleForm.h"
#include "WordValidator.h"
#include<cmath>
#include<iostream>
#include <fstream>

		using namespace std;
		using namespace System;
		using namespace Team11Boggle;

		[STAThreadAttribute]
		int main(array<System::String ^> ^args)
		{
			Application::EnableVisualStyles();
			Application::SetCompatibleTextRenderingDefault(false);

			Application::Run(gcnew BoggleForm());
			
			return 0;
		}

		BoggleForm::BoggleForm(void)
		{
			this->validWord = "";
			this->buttonList = gcnew List<Button^>(16);
			this->word = gcnew array<String^>(16);
			this->btn2 = this->button1;
			srand(time(0));
			InitializeComponent();
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


		void BoggleForm::Timer_Tick(System::Object^  sender, System::EventArgs^  e) {

			this->seconds--;
			this->sec = Convert::ToString(this->seconds);
			this->min = Convert::ToString(this->minutes);
			GameTimer->Text = this->min + ":" + this->sec;

			if (this->minutes == 0 && this->seconds == 0){
				GameTimer->Text = "0:00";
				Timer->Stop();
			}
			else if (this->seconds == 0)
			{
				this->seconds = 59;
				this->minutes--;
			}

		}

		void BoggleForm::onStartClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			this->Timer->Start();
			this->populateGameBoard();			
		}

		void BoggleForm::populateGameBoard(){

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

		void BoggleForm::clickedButtonList(Button^ clickedButton){
			this->buttonList->Add(clickedButton);
			
		}

		/// <summary>
		/// Adds the word to validTextBox after being
		/// validated in dictionary.
		/// </summary>
		/// <param name="sender">The sender.</param>
		/// <param name="e">The e.</param>
		void BoggleForm::addWord(System::Object^  sender, System::EventArgs^  e) {			
			for (int i = 0; i < this->word->Length; i++){	
				this->validWordBox->Text = this->word[i];				
				}
			
			//resetButtonColor();	
			resetButtonStyle();
		}

		void BoggleForm::resetButtonColor(){
			for (int i = 0; i < this->buttonList->Count; i++){
				this->buttonList[i]->ResetBackColor();				
			} 
		}

		void BoggleForm::resetButtonStyle(){
			for (int i = 0; i < this->buttonList->Count; i++){				
				this->buttonList[i]->FlatStyle = FlatStyle::System;
			}
		}

		void BoggleForm::getWord(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
			for (int i = 0; i < this->word->Length; i++){
				Button^ btn = dynamic_cast<Button^>(sender);
				this->clickedButtonList(btn);
				this->validWord = btn->Text;
				
					if (this->validWord == "Add"){						
						this->validWord = "\r\n";
					}
					else if(this->validWord == " "){
						this->validWord = "\r";
					}
					this->word[i] += this->validWord;
			}	
			}		
		
		void BoggleForm::onClickLetter(System::Object^  sender, System::EventArgs^  e) {

			Button^ btn1 = dynamic_cast<Button^>(sender);
			
			if (1 > 0){
				btn1->BackColor = ForeColor.Aqua; 
			}
						
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
