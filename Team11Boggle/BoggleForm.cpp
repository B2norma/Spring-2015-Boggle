#include "BoggleForm.h"
#include<cmath>
#include<iostream>

		using namespace std;

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
			this->word = gcnew List<String^>();
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

		/// <summary>
		/// Adds the word to validTextBox after being
		/// validated in dictionary.
		/// </summary>
		/// <param name="sender">The sender.</param>
		/// <param name="e">The e.</param>
		void BoggleForm::addWord(System::Object^  sender, System::EventArgs^  e) {

		}

		void BoggleForm::getWord(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			Button^ btn = dynamic_cast<Button^>(sender);
			this->validWord = btn->Text;
			this->word->Add(validWord);
			this->validWordBox->Text = this->validWord;
		}

		void BoggleForm::buttonLocation(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
			this->btn2 = dynamic_cast<Button^>(sender);
			this->btn2->Location.X;
		}

		void BoggleForm::textClick2(System::Object^  sender, System::EventArgs^  e) {
			this->btn2 = dynamic_cast<Button^>(sender);
			Button^ btn = dynamic_cast<Button^>(sender);
			String^ btnText = btn->Text;
		}

		void BoggleForm::onClickLetter(System::Object^  sender, System::EventArgs^  e) {

			Button^ btn1 = dynamic_cast<Button^>(sender);

			//Test for a possible solution
			/*if (btn1->Location.X <= this->btn2->Location.X + 75 && btn1->Location.X >= this->btn2->Location.X - 75
			&& btn1->Location.Y <= this->btn2->Location.Y + 75 && btn1->Location.Y >= this->btn2->Location.Y - 75){
			this->btn2->Width = btn1->Width;
			this->btn2->Height = btn1->Height;
			btn1->BackColor = ForeColor.Blue;
			}*/

			if (this->btn2->Location.X >= btn1->Location.X &&
				this->btn2->Location.X >= btn1->Location.X && btn1->Location.Y >= this->btn2->Location.Y &&
				this->btn2->Location.Y >= btn1->Location.Y){
				btn1->BackColor = ForeColor.Aqua;
				this->btn2->Location.X = btn1->Location.X;
			}
			else {
				btn1->BackColor = ForeColor.Black;
			}
		}

		/// <summary>
		/// Test method to begin game with double click 
		/// of game cube.
		/// </summary>
		/// <param name="sender">The sender.</param>
		/// <param name="e">The e.</param>
		void BoggleForm::onDoubleClick(System::Object^  sender, System::EventArgs^  e) {
			Button^ firstBtn = dynamic_cast<Button^>(sender);
			firstBtn->BackColor = ForeColor.Red;

		}
