#pragma once

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

	System::Void Timer_Tick(System::Object^  sender, System::EventArgs^  e);
	System::Void onStartClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	}	
        
	public:
		BoggleForm(void);
		

	protected:
		~BoggleForm();

	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;	
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox6;
	private: System::Windows::Forms::RichTextBox^  richTextBox7;
	private: System::Windows::Forms::RichTextBox^  richTextBox8;
	private: System::Windows::Forms::RichTextBox^  richTextBox9;
	private: System::Windows::Forms::RichTextBox^  richTextBox10;
	private: System::Windows::Forms::RichTextBox^  richTextBox11;
	private: System::Windows::Forms::RichTextBox^  richTextBox12;
	private: System::Windows::Forms::RichTextBox^  richTextBox13;
	private: System::Windows::Forms::RichTextBox^  richTextBox14;
	private: System::Windows::Forms::RichTextBox^  richTextBox15;
	private: System::Windows::Forms::RichTextBox^  richTextBox16;
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox11 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox12 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox13 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox14 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox15 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox16 = (gcnew System::Windows::Forms::RichTextBox());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->GameTimer = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(75, 75);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->richTextBox1);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox2);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox3);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox4);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox5);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox6);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox7);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox8);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox9);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox10);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox11);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox12);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox13);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox14);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox15);
			this->flowLayoutPanel1->Controls->Add(this->richTextBox16);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(324, 324);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox2->Location = System::Drawing::Point(84, 3);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(75, 75);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox3->Location = System::Drawing::Point(165, 3);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(75, 75);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox4->Location = System::Drawing::Point(246, 3);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->Size = System::Drawing::Size(75, 75);
			this->richTextBox4->TabIndex = 3;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox5->Location = System::Drawing::Point(3, 84);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->Size = System::Drawing::Size(75, 75);
			this->richTextBox5->TabIndex = 4;
			this->richTextBox5->Text = L"";
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox6->Location = System::Drawing::Point(84, 84);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->ReadOnly = true;
			this->richTextBox6->Size = System::Drawing::Size(75, 75);
			this->richTextBox6->TabIndex = 5;
			this->richTextBox6->Text = L"";
			// 
			// richTextBox7
			// 
			this->richTextBox7->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox7->Location = System::Drawing::Point(165, 84);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->ReadOnly = true;
			this->richTextBox7->Size = System::Drawing::Size(75, 75);
			this->richTextBox7->TabIndex = 6;
			this->richTextBox7->Text = L"";
			// 
			// richTextBox8
			// 
			this->richTextBox8->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox8->Location = System::Drawing::Point(246, 84);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->ReadOnly = true;
			this->richTextBox8->Size = System::Drawing::Size(75, 75);
			this->richTextBox8->TabIndex = 7;
			this->richTextBox8->Text = L"";
			// 
			// richTextBox9
			// 
			this->richTextBox9->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox9->Location = System::Drawing::Point(3, 165);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->ReadOnly = true;
			this->richTextBox9->Size = System::Drawing::Size(75, 75);
			this->richTextBox9->TabIndex = 8;
			this->richTextBox9->Text = L"";
			// 
			// richTextBox10
			// 
			this->richTextBox10->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox10->Location = System::Drawing::Point(84, 165);
			this->richTextBox10->Name = L"richTextBox10";
			this->richTextBox10->ReadOnly = true;
			this->richTextBox10->Size = System::Drawing::Size(75, 75);
			this->richTextBox10->TabIndex = 9;
			this->richTextBox10->Text = L"";
			// 
			// richTextBox11
			// 
			this->richTextBox11->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox11->Location = System::Drawing::Point(165, 165);
			this->richTextBox11->Name = L"richTextBox11";
			this->richTextBox11->ReadOnly = true;
			this->richTextBox11->Size = System::Drawing::Size(75, 75);
			this->richTextBox11->TabIndex = 10;
			this->richTextBox11->Text = L"";
			// 
			// richTextBox12
			// 
			this->richTextBox12->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox12->Location = System::Drawing::Point(246, 165);
			this->richTextBox12->Name = L"richTextBox12";
			this->richTextBox12->Size = System::Drawing::Size(75, 75);
			this->richTextBox12->TabIndex = 11;
			this->richTextBox12->Text = L"";
			// 
			// richTextBox13
			// 
			this->richTextBox13->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox13->Location = System::Drawing::Point(3, 246);
			this->richTextBox13->Name = L"richTextBox13";
			this->richTextBox13->ReadOnly = true;
			this->richTextBox13->Size = System::Drawing::Size(75, 75);
			this->richTextBox13->TabIndex = 12;
			this->richTextBox13->Text = L"";
			// 
			// richTextBox14
			// 
			this->richTextBox14->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox14->Location = System::Drawing::Point(84, 246);
			this->richTextBox14->Name = L"richTextBox14";
			this->richTextBox14->ReadOnly = true;
			this->richTextBox14->Size = System::Drawing::Size(75, 75);
			this->richTextBox14->TabIndex = 13;
			this->richTextBox14->Text = L"";
			// 
			// richTextBox15
			// 
			this->richTextBox15->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox15->Location = System::Drawing::Point(165, 246);
			this->richTextBox15->Name = L"richTextBox15";
			this->richTextBox15->ReadOnly = true;
			this->richTextBox15->Size = System::Drawing::Size(75, 75);
			this->richTextBox15->TabIndex = 14;
			this->richTextBox15->Text = L"";
			// 
			// richTextBox16
			// 
			this->richTextBox16->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox16->Location = System::Drawing::Point(246, 246);
			this->richTextBox16->Name = L"richTextBox16";
			this->richTextBox16->ReadOnly = true;
			this->richTextBox16->Size = System::Drawing::Size(75, 75);
			this->richTextBox16->TabIndex = 15;
			this->richTextBox16->Text = L"";
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &BoggleForm::Timer_Tick);
			// 
			// GameTimer
			// 
			this->GameTimer->AutoSize = true;
			this->GameTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameTimer->Location = System::Drawing::Point(390, 15);
			this->GameTimer->Name = L"GameTimer";
			this->GameTimer->Size = System::Drawing::Size(71, 33);
			this->GameTimer->TabIndex = 2;
			this->GameTimer->Text = L"3:00";
			this->GameTimer->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(125, 355);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(114, 39);
			this->startButton->TabIndex = 3;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &BoggleForm::Timer_Tick);
			this->startButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &BoggleForm::onStartClick);
			// 
			// BoggleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 417);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->GameTimer);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"BoggleForm";
			this->Text = L"BoggleForm";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
	
};
}

