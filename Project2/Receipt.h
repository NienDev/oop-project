#pragma once
#include "cart.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Receipt
	/// </summary>
	public ref class Receipt : public System::Windows::Forms::Form
	{
	private:
		System::String^ name;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
		   System::String^ price;
		
	public:
		Receipt(void)
		{
			array<String^>^ orders = cart::getOrder();
			array<String^>^ prices = cart::getPrices();
			for (int i = 0; i < cart::getNumberOfItems(); i++) {
				name += orders[i] + "\n\n";
			}
			for (int i = 0; i < cart::getNumberOfItems(); i++) {
				price += prices[i] + "\n\n";
			}
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			changeDefaultReceipt();
		}

		void changeDefaultReceipt() {
			label1->Text = name;
			label2->Text = price;
			label4->Text = System::Convert::ToString(cart::getTotal());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Receipt()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
		   array<System::Windows::Forms::Label^>^ labels;
	private: System::Windows::Forms::Label^ label2;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AllowDrop = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 220);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			//this->label1->Text = name;
			this->label1->Click += gcnew System::EventHandler(this, &Receipt::label1_Click);
			// 
			// label2
			// 
			this->label2->AllowDrop = true;
			this->label2->Location = System::Drawing::Point(166, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 220);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			//this->label2->Text = price;
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label3
			// 
			this->label3->AllowDrop = true;
			this->label3->Location = System::Drawing::Point(166, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Price: $";
			this->label3->Click += gcnew System::EventHandler(this, &Receipt::label3_Click);
			// 
			// label4
			// 
			this->label4->AllowDrop = true;
			this->label4->Location = System::Drawing::Point(228, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 30);
			this->label4->TabIndex = 3;
			this->label4->Text = L"123";
			//this->label4->Text = System::Convert::ToString(cart::getTotal());
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label4->Click += gcnew System::EventHandler(this, &Receipt::label4_Click);
			// 
			// Receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 300);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Receipt";
			this->Text = L"Receipt";
			this->Load += gcnew System::EventHandler(this, &Receipt::Receipt_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Receipt_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
