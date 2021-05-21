#pragma once
#include "NumberGenerator.h"

namespace CRLForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  generate;
	private: System::Windows::Forms::TextBox^  tbNumber;

	protected:

	protected:

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
			this->generate = (gcnew System::Windows::Forms::Button());
			this->tbNumber = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// generate
			// 
			this->generate->Location = System::Drawing::Point(150, 224);
			this->generate->Name = L"generate";
			this->generate->Size = System::Drawing::Size(119, 50);
			this->generate->TabIndex = 0;
			this->generate->Text = L"Generate";
			this->generate->UseVisualStyleBackColor = true;
			this->generate->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// tbNumber
			// 
			this->tbNumber->Location = System::Drawing::Point(67, 73);
			this->tbNumber->Name = L"tbNumber";
			this->tbNumber->ReadOnly = true;
			this->tbNumber->Size = System::Drawing::Size(292, 26);
			this->tbNumber->TabIndex = 1;
			this->tbNumber->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 403);
			this->Controls->Add(this->tbNumber);
			this->Controls->Add(this->generate);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void generate_Click(System::Object^  sender, System::EventArgs^  e) {
		NumberGenerator::NumberGenerator();
	}
	private: System::Void tbNumber_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}

	};
}
