#pragma once
#include "Receipt.h"
#include "cart.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Description
	/// </summary>
	public ref class Description : public System::Windows::Forms::Form
	{
	private:
		 System::String^ name;
		 System::String^ des;
		 double cost;
		 System::String^ ingre;
	public:
		Description(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Description(System::String^ name) {
			this->name = name;
			InitializeComponent();
		}
		Description(System::String^ name, System::String^ des, System::String^ ingre, double cost) {
			this->name = name;
			this->des = des;
			this->ingre = ingre;
			this->cost = cost;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Description()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ show_receipt;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ food_name_param;
	private: System::Windows::Forms::Label^ description_param;
	private: System::Windows::Forms::Label^ ingredient_param;
	private: System::Windows::Forms::Label^ price_param;
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
			this->show_receipt = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->food_name_param = (gcnew System::Windows::Forms::Label());
			this->description_param = (gcnew System::Windows::Forms::Label());
			this->ingredient_param = (gcnew System::Windows::Forms::Label());
			this->price_param = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Food Name";
			this->label1->Click += gcnew System::EventHandler(this, &Description::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Food Description";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ingredients";
			this->label3->Click += gcnew System::EventHandler(this, &Description::label3_Click);
			// 
			// show_receipt
			// 
			this->show_receipt->Location = System::Drawing::Point(315, 255);
			this->show_receipt->Name = L"show_receipt";
			this->show_receipt->Size = System::Drawing::Size(75, 23);
			this->show_receipt->TabIndex = 3;
			this->show_receipt->Text = L"Order";
			this->show_receipt->UseVisualStyleBackColor = true;
			this->show_receipt->Click += gcnew System::EventHandler(this, &Description::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Price:";
			this->label4->Click += gcnew System::EventHandler(this, &Description::label4_Click);
			// 
			// food_name_param
			// 
			this->food_name_param->AutoSize = true;
			this->food_name_param->Location = System::Drawing::Point(24, 39);
			this->food_name_param->Name = L"food_name_param";
			this->food_name_param->Size = System::Drawing::Size(121, 16);
			this->food_name_param->TabIndex = 5;
			this->food_name_param->Text = L"Food Name param";
			// 
			// description_param
			// 
			this->description_param->AllowDrop = true;
			this->description_param->Location = System::Drawing::Point(24, 89);
			this->description_param->Name = L"description_param";
			this->description_param->Size = System::Drawing::Size(220, 68);
			this->description_param->TabIndex = 6;
			this->description_param->Text = L"nien";
			this->description_param->Click += gcnew System::EventHandler(this, &Description::description_param_Click);
			// 
			// ingredient_param
			// 
			this->ingredient_param->AutoSize = true;
			this->ingredient_param->Location = System::Drawing::Point(24, 173);
			this->ingredient_param->Name = L"ingredient_param";
			this->ingredient_param->Size = System::Drawing::Size(115, 16);
			this->ingredient_param->TabIndex = 7;
			this->ingredient_param->Text = L"Food Ingre Param";
			// 
			// price_param
			// 
			this->price_param->AutoSize = true;
			this->price_param->Location = System::Drawing::Point(60, 221);
			this->price_param->Name = L"price_param";
			this->price_param->Size = System::Drawing::Size(79, 16);
			this->price_param->TabIndex = 8;
			this->price_param->Text = L"price param";
			// 
			// Description
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 290);
			this->Controls->Add(this->price_param);
			this->Controls->Add(this->ingredient_param);
			this->Controls->Add(this->description_param);
			this->Controls->Add(this->food_name_param);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->show_receipt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Description";
			this->Text = L"Description";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void description_param_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	cart::addOrder(name, cost);

	Receipt^ receipt = gcnew Receipt();
	receipt->ShowDialog();

}
};
}
