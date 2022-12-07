#pragma once
#include "Receipt.h"

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
		 int index;
		 int imgIndex;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList6;
	private: System::Windows::Forms::ImageList^ imageList3;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
		   System::String^ ingre;
	public: bool isOrder;
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
		
void updateDescription() {
	if (index == 1) {
		pictureBox1->BackgroundImage = imageList2->Images[imgIndex];
	}
	else {
		if (index == 2) {
			pictureBox1->BackgroundImage = imageList3->Images[imgIndex];
		}
		else {
			pictureBox1->BackgroundImage = imageList6->Images[imgIndex];
		}
	}
	food_name_param->Text = name;
	description_param->Text = des;
	label6->Text = des;
	label5->Text = ingre;
	price_param->Text = cost.ToString();
	
	
		}


		Description(System::String^ name, System::String^ des, System::String^ ingre, double cost, int index,int imgIndex) {
			this->name = name;
			this->des = des;
			this->ingre = ingre;
			this->cost = cost;
			this->index = index;
				this->imgIndex = imgIndex;
				this->isOrder = false;
			InitializeComponent();
			updateDescription();
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


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ food_name_param;
	private: System::Windows::Forms::Label^ description_param;

	private: System::Windows::Forms::Label^ price_param;
	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Description::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->food_name_param = (gcnew System::Windows::Forms::Label());
			this->description_param = (gcnew System::Windows::Forms::Label());
			this->price_param = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList6 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Food Name:";
			this->label1->Click += gcnew System::EventHandler(this, &Description::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Food Description:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ingredients";
			this->label3->Click += gcnew System::EventHandler(this, &Description::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Price: $";
			this->label4->Click += gcnew System::EventHandler(this, &Description::label4_Click);
			// 
			// food_name_param
			// 
			this->food_name_param->AutoSize = true;
			this->food_name_param->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->food_name_param->ForeColor = System::Drawing::Color::Black;
			this->food_name_param->Location = System::Drawing::Point(110, 6);
			this->food_name_param->Name = L"food_name_param";
			this->food_name_param->Size = System::Drawing::Size(245, 34);
			this->food_name_param->TabIndex = 5;
			this->food_name_param->Text = L"Food Name param";
			// 
			// description_param
			// 
			this->description_param->AllowDrop = true;
			this->description_param->Location = System::Drawing::Point(13, 55);
			this->description_param->Name = L"description_param";
			this->description_param->Size = System::Drawing::Size(195, 105);
			this->description_param->TabIndex = 6;
			this->description_param->Text = L"nien";
			this->description_param->Click += gcnew System::EventHandler(this, &Description::description_param_Click);
			// 
			// price_param
			// 
			this->price_param->AllowDrop = true;
			this->price_param->AutoSize = true;
			this->price_param->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_param->ForeColor = System::Drawing::Color::Black;
			this->price_param->Location = System::Drawing::Point(107, 294);
			this->price_param->Name = L"price_param";
			this->price_param->Size = System::Drawing::Size(43, 30);
			this->price_param->TabIndex = 8;
			this->price_param->Text = L"123";
			this->price_param->Click += gcnew System::EventHandler(this, &Description::price_param_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(278, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 287);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// imageList6
			// 
			this->imageList6->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList6.ImageStream")));
			this->imageList6->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList6->Images->SetKeyName(0, L"bun-dau-mam-tom.png");
			this->imageList6->Images->SetKeyName(1, L"bun-dau-thit.png");
			this->imageList6->Images->SetKeyName(2, L"bun-dau-cha-com.png");
			this->imageList6->Images->SetKeyName(3, L"bun-dau-gio-sun.png");
			this->imageList6->Images->SetKeyName(4, L"bun-dau-cha-cua.png");
			this->imageList6->Images->SetKeyName(5, L"bun-dau-thap-cam.png");
			// 
			// imageList3
			// 
			this->imageList3->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList3.ImageStream")));
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList3->Images->SetKeyName(0, L"chicken-soup.png");
			this->imageList3->Images->SetKeyName(1, L"tomato-soup.png");
			this->imageList3->Images->SetKeyName(2, L"crab-soup.png");
			this->imageList3->Images->SetKeyName(3, L"tom-yum-soup.png");
			this->imageList3->Images->SetKeyName(4, L"White-Bean-Chicken-Soup.png");
			this->imageList3->Images->SetKeyName(5, L"Italian-Meatball-Soup.png");
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"Supreme-Pizza.png");
			this->imageList2->Images->SetKeyName(1, L"prawn-pizza.png");
			this->imageList2->Images->SetKeyName(2, L"kale-pizza.png");
			this->imageList2->Images->SetKeyName(3, L"meat-lover-pizza.png");
			this->imageList2->Images->SetKeyName(4, L"pine-pizza.png");
			this->imageList2->Images->SetKeyName(5, L"pepperoni-pizza.png");
			// 
			// label5
			// 
			this->label5->AllowDrop = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 55);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &Description::label5_Click);
			// 
			// label6
			// 
			this->label6->AllowDrop = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(259, 161);
			this->label6->TabIndex = 6;
			this->label6->Text = L"nien";
			this->label6->Click += gcnew System::EventHandler(this, &Description::description_param_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(347, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 39);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Order";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Description::button1_Click_1);
			// 
			// Description
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 380);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->price_param);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->description_param);
			this->Controls->Add(this->food_name_param);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Description";
			this->Text = L"Description";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void ingredient_param_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ingredient_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void price_param_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	isOrder = true;
	this->Hide();
}
};
}
