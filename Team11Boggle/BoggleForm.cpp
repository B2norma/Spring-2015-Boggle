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
		this->btn2 = this->richTextBox2;

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
		}

		void BoggleForm::onFirstClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			//RichTextBox^ btn = dynamic_cast<RichTextBox^>(sender); // or safe_cast
			//this->btn2 = btn;
			//			 btn->BackColor = ForeColor.Blue;	
						 
		}
		
		void BoggleForm::onClickLetter(System::Object^  sender, System::EventArgs^  e) {
			RichTextBox^ btn = dynamic_cast<RichTextBox^>(sender); // or safe_cast
			RichTextBox^ btn2 = dynamic_cast<RichTextBox^>(sender);
			btn2 = btn;

			btn = dynamic_cast<RichTextBox^>(sender);

			if (abs(btn->Location.X - btn2->Location.X == 0) || abs(btn->Location.Y - btn2->Location.Y) == 81){
				btn->BackColor = ForeColor.Blue;

			}
		}
					
					
				
		

		 void BoggleForm::button1_Click(System::Object^  sender, System::EventArgs^  e) {	
			 
			 
		 }			 
		
