#include "BoggleForm.h"
#include<cmath>
#include<string>
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
		this->btn = this->richTextBox1;
		

		InitializeComponent();	
this->btn2 = this->richTextBox2;
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
		}

		int BoggleForm::determineLocation(RichTextBox^ btn){
			int btnLocation = btn->Location.X;
			return btnLocation;
		}

		RichTextBox^ BoggleForm::onFirstClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {			
			returnBox(sender, e);		
			return this->richTextBox1;
		}

		void BoggleForm::returnBox(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
			this->btn2 = dynamic_cast<RichTextBox^>(sender);			
		}

		void BoggleForm::onClickLetter(System::Object^  sender, System::EventArgs^  e) {			
			RichTextBox^ btn1x = dynamic_cast<RichTextBox^>(sender);			
			RichTextBox^ btn = dynamic_cast<RichTextBox^>(sender);



			if (this->btn2->Location.X <= btn1x->Location.X){ //&& btn2x->Location.X >= btn1x->Location.X && btn1y->Location.Y >= btn2y->Location.Y && btn2y->Location.Y >= btn1y->Location.Y){
				
				btn->BackColor = ForeColor.Red;
			}
			else {
				cout << "Test" << endl;
				btn1x->BackColor = ForeColor.Black;
			}
		}
		
		void BoggleForm::onDoubleClick(System::Object^  sender, System::EventArgs^  e) {
			RichTextBox^ firstBtn = dynamic_cast<RichTextBox^>(sender);
			firstBtn->BackColor = ForeColor.Red;
			
		}
		
					
					
				
		

		 void BoggleForm::button1_Click(System::Object^  sender, System::EventArgs^  e) {	
			 
			 
		 }			 
		
