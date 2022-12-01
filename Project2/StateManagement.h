#pragma once
#include "data.h"
namespace Project2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StateManagement
	/// </summary>
public
	ref class StateManagement : public System::Windows::Forms::Form
	{
	private:
		int index;

	private:
		System::Windows::Forms::Button ^ bundaubtn;

	private:
		System::Windows::Forms::Button ^ soupbtn;

	private:
		System::Windows::Forms::Button ^ pizzabtn;

	private:
		System::Windows::Forms::Button ^ btn4;

	private:
		System::Windows::Forms::Button ^ btn3;

	private:
		System::Windows::Forms::Button ^ btn2;

	private:
		System::Windows::Forms::Button ^ btn1;

		static array<System::String ^> ^ btn_names = gcnew array<System::String ^>{"soupbtn", "bundaumamtombtn", "pizzabtn"};

	private:
		System::ComponentModel::IContainer ^ components;

	private:
		System::Windows::Forms::ImageList ^ imageList1;

	private:
		System::Windows::Forms::ImageList ^ imageList2;

	private:
		System::Windows::Forms::ImageList ^ imageList3;

	private:
		System::Windows::Forms::PictureBox ^ pictureBox1;

	private:
		System::Windows::Forms::Label ^ label1;
		static array<System::String ^> ^ btnImg_names = gcnew array<System::String ^>{"btn1", "btn2", "btn3", "btn4"};

	private:
		System::Windows::Forms::PictureBox ^ pictureBox2;

	private:
		System::Windows::Forms::Label ^ label2;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		array<System::Windows::Forms::Label ^> ^ foodMoneys = gcnew array<System::Windows::Forms::Label ^>(100);

	private:
		array<System::Windows::Forms::PictureBox ^> ^ icons = gcnew array<System::Windows::Forms::PictureBox ^>(100);

	private:
		array<System::Windows::Forms::Label ^> ^ foodNames = gcnew array<System::Windows::Forms::Label ^>(100);

	private:
		System::Windows::Forms::ImageList ^ imageList4;

	private:
		array<System::Windows::Forms::Button ^> ^ exitBtns = gcnew array<System::Windows::Forms::Button ^>(100);

	private:
		array<System::Windows::Forms::PictureBox ^> ^ layouts = gcnew array<System::Windows::Forms::PictureBox ^>(100);

	public:
		StateManagement(void)
		{
			InitializeComponent();
			index = 1;
			updateState();

			createCustomBtns();
			//
			// TODO: Add the constructor code here
			//

			updateCart();
		}

		void updateCart()
		{
			for (int i = 0; i < 3; i++)
			{
				layouts[i] = gcnew System::Windows::Forms::PictureBox;
				foodNames[i] = gcnew System::Windows::Forms::Label;
				foodMoneys[i] = gcnew System::Windows::Forms::Label;
				icons[i] = gcnew System::Windows::Forms::PictureBox;
				exitBtns[i] = gcnew System::Windows::Forms::Button;

				layouts[i]->BackColor = System::Drawing::Color::White;
				layouts[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				layouts[i]->Location = System::Drawing::Point(600, 140 + 120*i);
				layouts[i]->Name = L"layout0";
				layouts[i]->Size = System::Drawing::Size(320, 100);
				layouts[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				//layouts[i]->TabIndex = (i+1) * 100;
				layouts[i]->TabStop = false;
				layouts[i]->WaitOnLoad = true;
				this->Controls->Add(layouts[i]);
				layouts[i]->BringToFront();

				foodNames[i]->Text = "Food name";
				foodNames[i]->Name = "name0";
				//foodNames[i]->TabIndex = 200;
				foodNames[i]->Size = System::Drawing::Size(50, 60);
				foodNames[i]->AutoSize = true;
				foodNames[i]->Location = System::Drawing::Point(100, 20);
				foodNames[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																													static_cast<System::Byte>(163)));
				foodNames[i]->BackColor = System::Drawing::Color::White;
				layouts[i]->Controls->Add(foodNames[i]);

				foodMoneys[i] = gcnew System::Windows::Forms::Label;
				foodMoneys[i]->AutoSize = true;
				foodMoneys[i]->BackColor = System::Drawing::Color::White;
				foodMoneys[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																													 static_cast<System::Byte>(163)));
				foodMoneys[i]->Location = System::Drawing::Point(100, 50);
				foodMoneys[i]->Name = L"money0";
				foodMoneys[i]->Size = System::Drawing::Size(72, 25);
				//foodMoneys[i]->TabIndex = 20;
				foodMoneys[i]->Text = L"Testing";
				layouts[i]->Controls->Add(foodMoneys[i]);

				icons[i]->BackColor = System::Drawing::Color::White;
				icons[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				icons[i]->BackgroundImage = imageList4->Images[0];
				icons[i]->Location = System::Drawing::Point(0, 0);
				icons[i]->Name = L"icon0";
				icons[i]->Size = System::Drawing::Size(100, 100);
				icons[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				//icons[i]->TabIndex = 18;
				icons[i]->TabStop = false;
				layouts[i]->Controls->Add(icons[i]);

				exitBtns[i] = gcnew System::Windows::Forms::Button;
				exitBtns[i]->BackColor = System::Drawing::Color::White;
				exitBtns[i]->Location = System::Drawing::Point(280, 10);
				exitBtns[i]->Name = L"btn0";
				exitBtns[i]->Size = System::Drawing::Size(30, 32);
				//exitBtns[i]->TabIndex = 21;
				exitBtns[i]->Text = L"x";
				exitBtns[i]->UseVisualStyleBackColor = false;
				exitBtns[i]->Click += gcnew System::EventHandler(this, &StateManagement::exitBtn_Click);
				layouts[i]->Controls->Add(exitBtns[i]);
			}

			/*for (int i = 0; i < 10; i++) {
				btns[i] = gcnew System::Windows::Forms::Button;
				btns[i]->Text = "Tran Dai Nien";
				btns[i]->Size = System::Drawing::Size(50, 60);
				btns[i]->Click += gcnew System::EventHandler(this, &StateManagement::btn1_Click);
				btns[i]->Location = System::Drawing::Point(150, 100+100*i);
				btns[i]->Name = i.ToString();
				btns[i]->TabIndex = i * 10;
				btns[i]->UseVisualStyleBackColor = true;
				pictureBox1->Controls->Add(btns[i]);
			}*/
		}

		bool isBtn(System::String ^ name)
		{
			for each (System::String ^ btn_name in btn_names)
			{
				if (btn_name == name)
					return true;
			}
			return false;
		}
		void setIndex(int index)
		{
			this->index = index;
		}
		void setDefaultBtn()
		{
			for each (Control ^ component in Controls)
			{
				if (isBtn(component->Name))
				{
					if (component->Name == "pizzabtn")
						component->BackgroundImage = imageList1->Images[0];
					else if (component->Name == "soupbtn")
					{
						component->BackgroundImage = imageList1->Images[2];
					}
					else
						component->BackgroundImage = imageList1->Images[4];
				}
			}
		}
		void updateState()
		{
			switch (index)
			{
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

		bool isImgBtn(System::String ^ currentname)
		{
			for each (System::String ^ name in btnImg_names)
			{
				if (name == currentname)
					return true;
			}
			return false;
		}

		void createCustomBtns()
		{ // customize here
			std::vector<Item> items;
			switch (index)
			{
			case 1:
				items = data::getPizzas();
				break;
			case 2:
				items = data::getSoups();
				break;
			case 3:
				break;
			}

			// data::addItem(items[0]);
			int i = 0;
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StateManagement::typeid));

			for each (Control ^ button in this->Controls)
			{
				if (isImgBtn(button->Name))
				{
					button->Location = System::Drawing::Point(items[i].x, items[i].y);
					String ^ str = gcnew String(items[i].img.c_str());
					// button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(str)));
					if (index == 1)
					{

						button->BackgroundImage = imageList2->Images[i];
					}
					else if (index == 2)
					{

						button->BackgroundImage = imageList3->Images[i];
					}
					else
					{
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
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StateManagement::typeid));
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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList4 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			//
			// bundaubtn
			//
			this->bundaubtn->BackColor = System::Drawing::Color::White;
			this->bundaubtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"bundaubtn.BackgroundImage")));
			this->bundaubtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bundaubtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bundaubtn->ForeColor = System::Drawing::Color::White;
			this->bundaubtn->Location = System::Drawing::Point(471, 12);
			this->bundaubtn->Name = L"bundaubtn";
			this->bundaubtn->Size = System::Drawing::Size(200, 62);
			this->bundaubtn->TabIndex = 8;
			this->bundaubtn->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->bundaubtn->UseVisualStyleBackColor = false;
			this->bundaubtn->Click += gcnew System::EventHandler(this, &StateManagement::bundaubtn_Click);
			//
			// soupbtn
			//
			this->soupbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"soupbtn.BackgroundImage")));
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
			this->pizzabtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pizzabtn.BackgroundImage")));
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
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer ^>(resources->GetObject(L"imageList1.ImageStream")));
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
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer ^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"Supreme-Pizza.png");
			this->imageList2->Images->SetKeyName(1, L"prawn-pizza.png");
			this->imageList2->Images->SetKeyName(2, L"kale-pizza.png");
			this->imageList2->Images->SetKeyName(3, L"meat-lover-pizza.png");
			//
			// imageList3
			//
			this->imageList3->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer ^>(resources->GetObject(L"imageList3.ImageStream")));
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList3->Images->SetKeyName(0, L"chicken-soup.png");
			this->imageList3->Images->SetKeyName(1, L"crab-soup.png");
			this->imageList3->Images->SetKeyName(2, L"tomato-soup.png");
			this->imageList3->Images->SetKeyName(3, L"tom-yum-soup.png");
			//
			// pictureBox1
			//
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
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
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																												static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
																																 static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->label1->Location = System::Drawing::Point(778, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 35);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Current Order";
			//
			// pictureBox2
			//
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(784, 50);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(149, 87);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &StateManagement::pictureBox2_Click);
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																												static_cast<System::Byte>(163)));
			this->label2->Location = System::Drawing::Point(909, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 32);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Food name";
			this->label2->Click += gcnew System::EventHandler(this, &StateManagement::label2_Click);
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																												static_cast<System::Byte>(163)));
			this->label3->Location = System::Drawing::Point(909, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 25);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Money";
			//
			// button1
			//
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1212, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 32);
			this->button1->TabIndex = 21;
			this->button1->Text = L"x";
			this->button1->UseVisualStyleBackColor = false;
			//
			// imageList4
			//
			this->imageList4->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer ^>(resources->GetObject(L"imageList4.ImageStream")));
			this->imageList4->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList4->Images->SetKeyName(0, L"supreme-pizza-icon.png");
			this->imageList4->Images->SetKeyName(1, L"cheese-pizza-icon.png");
			this->imageList4->Images->SetKeyName(2, L"kale-pizza-icon.png");
			this->imageList4->Images->SetKeyName(3, L"meat-lover-pizza-icon.png");
			//
			// StateManagement
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
																												 static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(1266, 654);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->pizzabtn);
			this->Controls->Add(this->soupbtn);
			this->Controls->Add(this->bundaubtn);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"StateManagement";
			this->Text = L"StateManagement";
			this->Load += gcnew System::EventHandler(this, &StateManagement::StateManagement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private:
		System::Void StateManagement_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void pizzabtn_Click_1(System::Object ^ sender, System::EventArgs ^ e)
		{
			setIndex(1);
			updateState();
		}

	private:
		System::Void soupbtn_Click_1(System::Object ^ sender, System::EventArgs ^ e)
		{
			setIndex(2);
			updateState();
		}

	private:
		System::Void bundaubtn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			// setIndex(3);
			// updateState();
		}

	private:
		System::Void btn1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void exitBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			Button ^ btn = (Button ^) sender;
			PictureBox ^ layout = (PictureBox ^) btn->Parent;
			layout->Hide();
		}

	private:
		System::Void pictureBox2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}
	};
}
