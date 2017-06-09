#pragma once

namespace mbesha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtBalance;
	private: System::Windows::Forms::Button^  btnCalculate;
	private: System::Windows::Forms::Label^  lblBalance;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBalance = (gcnew System::Windows::Forms::TextBox());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your current balance";
			// 
			// txtBalance
			// 
			this->txtBalance->Location = System::Drawing::Point(73, 68);
			this->txtBalance->Name = L"txtBalance";
			this->txtBalance->Size = System::Drawing::Size(129, 20);
			this->txtBalance->TabIndex = 1;
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(73, 95);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(129, 23);
			this->btnCalculate->TabIndex = 2;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &Form1::btnCalculate_Click);
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->Location = System::Drawing::Point(70, 131);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(123, 13);
			this->lblBalance->TabIndex = 3;
			this->lblBalance->Text = L"Balance will appear here";
			this->lblBalance->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblBalance);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->txtBalance);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBalance->Text == ""){
			lblBalance->Visible = true;
			lblBalance->Text = "Please Enter Balance";
		}
		else
		{
			int a = System::Convert::ToInt32(txtBalance->Text);

			if (a <= 50)
			{
				lblBalance->Text = "Limited Funds!!";
			}

			else if (a >= 60 && a <= 100)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 10);
				cout << "\nTransaction Cost: 10";
			}

			else if (a >= 101 && a <= 2500)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 27);
				cout << "\nTransaction Cost: Sh.27";
			}

			else if (a >= 2501 && a <= 3500)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 49);
				cout << "\nTransaction Cost: Sh.49";
			}

			else if (a >= 3501 && a <= 5000)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 66);
				cout << "\nTransaction Cost: Sh.66";
			}

			else if (a >= 5001 && a <= 7500)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 82);
				cout << "\nTransaction Cost: Sh.82";
			}

			else if (a >= 7501 && a <= 10000)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 110);
				cout << "\nTransaction Cost: Sh.110";
			}

			else if (a >= 10001 && a <= 15000)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 159);
				cout << "\nTransaction Cost: Sh.159";
			}

			else if (a >= 15001 && a <= 20000)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 176);
				cout << "\nTransaction Cost: Sh.176";
			}

			else if (a >= 20001 && a <= 35000)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 187);
				cout << "\nTransaction Cost: Sh.187";
			}

			else if (a >= 35001 && a <= 40000)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 275);
				cout << "\nTransaction Cost: Sh.275";
			}

			else if (a >= 50001 && a <= 70000)
			{
				cout << "Your Possible Withdrawal is Approximately: " << (a - 330);
				cout << "\nTransaction Cost: Sh.330";
			}
		}
	}
	};
}
