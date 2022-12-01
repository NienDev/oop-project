#pragma once
#include "data.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StateManagement
	/// </summary>
	public ref class StateManagement : public System::Windows::Forms::Form
	{
	private:
		int index;

	private: System::Windows::Forms::Button^ bundaubtn;
	private: System::Windows::Forms::Button^ soupbtn;
	private: System::Windows::Forms::Button^ pizzabtn;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;

		   static array<System::String^>^ btn_names = gcnew array<System::String^>{"soupbtn", "bundaumamtombtn", "pizzabtn"};

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::ImageList^ imageList3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
		   static array<System::String^>^ btnImg_names = gcnew array<System::String^> { "btn1", "btn2", "btn3", "btn4" };
	public:
		StateManagement(void)
		{
			InitializeComponent();
			index = 1;
			updateState();
			
			createCustomBtns();
			//
			//TODO: Add the constructor code here
			//


		}
		bool isBtn(System::String^ name) {
			for each (System::String ^ btn_name in btn_names) {
				if (btn_name == name) return true;
			}
			return false;
		}
		void setIndex(int index) {
			this->index = index;
		}
		void setDefaultBtn() {
			for each (Control^ component in Controls) {
				if (isBtn(component->Name)) {
					if (component->Name == "pizzabtn")
					component->BackgroundImage = imageList1->Images[0];
					else if (component->Name == "soupbtn") {
						component->BackgroundImage = imageList1->Images[2];
					}
					else component->BackgroundImage = imageList1->Images[4];
				}
			}
		}
		void updateState() {
			switch (index) {
			case 1:
				setDefaultBtn();
				pizzabtn->BackgroundImage = imageList1->Images[1];
				createCustomBtns();
				break;
			case 2:
				setDefaultBtn();
				soupbtn->BackgroundImage = imageList1->Images[3];
				createCustomBtns();
				break;
			case 3:
				setDefaultBtn();
				bundaubtn->BackgroundImage = imageList1->Images[5];
				break;
			}
		}

		bool isImgBtn(System::String^ currentname) {
			for each (System::String ^ name in btnImg_names) {
				if (name == currentname) return true;
			}
			return false;
		}

		void createCustomBtns() { //customize here
			std::vector<Item> items;
			switch (index) {
			case 1: 
				items = data::getPizzas();
				break;
			case 2:
				items = data::getSoups();
				break;
			case 3: break;
			}

			//data::addItem(items[0]);
			int i = 0;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StateManagement::typeid));

			for each (Control ^ button in this->Controls) {
				if (isImgBtn(button->Name))
				{
					button->Location = System::Drawing::Point(items[i].x, items[i].y);
					String^ str = gcnew String(items[i].img.c_str());
					//button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(str)));
					if (index == 1) {

					button->BackgroundImage = imageList2->Images[i];
					}
					else if (index == 2) {
												
					button->BackgroundImage = imageList3->Images[i];
					}
					else {

					}
					button->Text = gcnew String(items[i].name.c_str());
					i++;
				}
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StateManagement()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StateManagement::typeid));
			this->bundaubtn = (gcnew System::Windows::Forms::Button());
			this->soupbtn = (gcnew System::Windows::Forms::Button());
			this->pizzabtn = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bundaubtn
			// 
			this->bundaubtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bundaubtn.BackgroundImage")));
			this->bundaubtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bundaubtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bundaubtn->ForeColor = System::Drawing::SystemColors::Control;
			this->bundaubtn->Location = System::Drawing::Point(471, 12);
			this->bundaubtn->Name = L"bundaubtn";
			this->bundaubtn->Size = System::Drawing::Size(200, 62);
			this->bundaubtn->TabIndex = 8;
			this->bundaubtn->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->bundaubtn->UseVisualStyleBackColor = true;
			this->bundaubtn->Click += gcnew System::EventHandler(this, &StateManagement::bundaubtn_Click);
			// 
			// soupbtn
			// 
			this->soupbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"soupbtn.BackgroundImage")));
			this->soupbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->soupbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->soupbtn->ForeColor = System::Drawing::SystemColors::Control;
			this->soupbtn->Location = System::Drawing::Point(251, 12);
			this->soupbtn->Name = L"soupbtn";
			this->soupbtn->Size = System::Drawing::Size(200, 62);
			this->soupbtn->TabIndex = 9;
			this->soupbtn->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->soupbtn->UseVisualStyleBackColor = true;
			this->soupbtn->Click += gcnew System::EventHandler(this, &StateManagement::soupbtn_Click_1);
			// 
			// pizzabtn
			// 
			this->pizzabtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pizzabtn.BackgroundImage")));
			this->pizzabtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pizzabtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pizzabtn->ForeColor = System::Drawing::SystemColors::Control;
			this->pizzabtn->Location = System::Drawing::Point(28, 12);
			this->pizzabtn->Name = L"pizzabtn";
			this->pizzabtn->Size = System::Drawing::Size(200, 62);
			this->pizzabtn->TabIndex = 10;
			this->pizzabtn->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->pizzabtn->UseVisualStyleBackColor = true;
			this->pizzabtn->Click += gcnew System::EventHandler(this, &StateManagement::pizzabtn_Click_1);
			// 
			// btn4
			// 
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->ForeColor = System::Drawing::SystemColors::Control;
			this->btn4->Location = System::Drawing::Point(35, 334);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(200, 270);
			this->btn4->TabIndex = 14;
			this->btn4->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn4->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->ForeColor = System::Drawing::SystemColors::Control;
			this->btn3->Location = System::Drawing::Point(253, 343);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(200, 270);
			this->btn3->TabIndex = 13;
			this->btn3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn3->UseVisualStyleBackColor = true;
			// 
			// btn2
			// 
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->ForeColor = System::Drawing::SystemColors::Control;
			this->btn2->Location = System::Drawing::Point(207, 100);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(200, 270);
			this->btn2->TabIndex = 12;
			this->btn2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn2->UseVisualStyleBackColor = true;
			// 
			// btn1
			// 
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->ForeColor = System::Drawing::SystemColors::Control;
			this->btn1->Location = System::Drawing::Point(35, 100);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(200, 270);
			this->btn1->TabIndex = 11;
			this->btn1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &StateManagement::btn1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"pizza-btn.png");
			this->imageList1->Images->SetKeyName(1, L"pizza-test.png");
			this->imageList1->Images->SetKeyName(2, L"soup-btn.png");
			this->imageList1->Images->SetKeyName(3, L"soup-btn-active.png");
			this->imageList1->Images->SetKeyName(4, L"bundau-btn.png");
			this->imageList1->Images->SetKeyName(5, L"bundau-btn-active.png");
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"Supreme-Pizza.png");
			this->imageList2->Images->SetKeyName(1, L"prawn-pizza.png");
			this->imageList2->Images->SetKeyName(2, L"kale-pizza.png");
			this->imageList2->Images->SetKeyName(3, L"meat-lover-pizza.png");
			// 
			// imageList3
			// 
			this->imageList3->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList3.ImageStream")));
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList3->Images->SetKeyName(0, L"chicken-soup.png");
			this->imageList3->Images->SetKeyName(1, L"crab-soup.png");
			this->imageList3->Images->SetKeyName(2, L"tomato-soup.png");
			this->imageList3->Images->SetKeyName(3, L"tom-yum-soup.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(767, -9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(503, 667);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(796, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Current Order";
			// 
			// StateManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(1266, 654);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->pizzabtn);
			this->Controls->Add(this->soupbtn);
			this->Controls->Add(this->bundaubtn);
			this->Name = L"StateManagement";
			this->Text = L"StateManagement";
			this->Load += gcnew System::EventHandler(this, &StateManagement::StateManagement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void StateManagement_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void pizzabtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	setIndex(1);
	updateState();

}
private: System::Void soupbtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	setIndex(2);
	updateState();
}
private: System::Void bundaubtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//setIndex(3);
	//updateState();
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
