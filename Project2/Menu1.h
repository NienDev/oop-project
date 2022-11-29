#pragma once
#include "PizzaMenu.h"
#include "cart.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Menu1
	/// </summary>
	public ref class Menu1 : public System::Windows::Forms::Form
	{
	public:
		Menu1(void)
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
		~Menu1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ menuCartBtn;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menu1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuCartBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(283, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 285);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(26, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 302);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(26, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(233, 285);
			this->button4->TabIndex = 9;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Menu1::button4_Click);
			// 
			// menuCartBtn
			// 
			this->menuCartBtn->Location = System::Drawing::Point(535, 32);
			this->menuCartBtn->Name = L"menuCartBtn";
			this->menuCartBtn->Size = System::Drawing::Size(76, 53);
			this->menuCartBtn->TabIndex = 10;
			this->menuCartBtn->Text = L"0";
			this->menuCartBtn->UseVisualStyleBackColor = true;
			this->menuCartBtn->Click += gcnew System::EventHandler(this, &Menu1::button3_Click_1);
			// 
			// Menu1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(639, 603);
			this->Controls->Add(this->menuCartBtn);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Menu1";
			this->Text = L"Menu";
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	PizzaMenu ^pizzaMenu = gcnew PizzaMenu;
	pizzaMenu->ShowDialog();
	menuCartBtn->Text = System::Convert::ToString(cart::getNumberOfItems());
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
