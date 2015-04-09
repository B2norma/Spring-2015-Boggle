#include "BoggleForm.h"
#include<cmath>
#include<iostream>
#include<string>

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
		    Timer->Start();
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

		void BoggleForm::returnButtonLocation(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
			this->btn2 = dynamic_cast<Button^>(sender); 
		}

		void BoggleForm::onClickLetter(System::Object^  sender, System::EventArgs^  e) {
			
			Button^ btn1 = dynamic_cast<Button^>(sender);
			
			if (this->btn2->Location.X <= btn1->Location.X){ //&& btn2x->Location.X >= btn1x->Location.X && btn1y->Location.Y >= btn2y->Location.Y && btn2y->Location.Y >= btn1y->Location.Y){
				btn1->BackColor = ForeColor.Blue;				
			}
			else {				
				btn1->BackColor = ForeColor.Black;
			}
		}

		void BoggleForm::onDoubleClick(System::Object^  sender, System::EventArgs^  e) {
			Button^ firstBtn = dynamic_cast<Button^>(sender);
			firstBtn->BackColor = ForeColor.Red;

		}
