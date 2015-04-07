#include "BoggleForm.h"

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
