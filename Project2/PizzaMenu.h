#pragma once
#include "SuccessfulNotification.h"
#include "cart.h"
#include "pizza.h"
#include "Receipt.h"
#include "Description.h"
#include <vector>
#include "data.h"
//struct Item {
//	std::string img, description;
//	int x, y;
//};

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PizzaMenu
	/// </summary>

	public ref class PizzaMenu : public System::Windows::Forms::Form
	{
	public:
		static array<System::String^>^ btn_names = gcnew array<System::String^> { "btn1", "btn2", "btn3", "btn4" };
	private: System::Windows::Forms::Button^ btn1;
	public:
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ supremeBtn;
	private: System::Windows::Forms::Button^ prawnBtn;
	private: System::Windows::Forms::Button^ meatLoverBtn;
	private: System::Windows::Forms::Button^ kaleBtn;


	public:




		int numberOfItems;
		PizzaMenu(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			
			numberOfItems = cart::getNumberOfItems();
			//
			
			createCustomBtns();
		}

		bool isBtn(System::String^ currentname) {
			for each (System::String^ name in btn_names) {
				if (name ==currentname) return true;
			}
			return false;
		}

		void createCustomBtns() {
			std::vector<Item> items = data::getData();

			//data::addItem(items[0]);
			int index = 0;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PizzaMenu::typeid));

			for each(Control^ button in this->Controls) {
				if (isBtn(button->Name))
				{
					button->Location = System::Drawing::Point(items[index].x, items[index].y);
					String^ str = gcnew String(items[index].img.c_str());
					button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(str)));
					button->Text = gcnew String(items[index].name.c_str());
					index++;
				}
			}
		}

		Pizza* makePizza(System::String^ name) {
			Pizza* newPizza;
			if (name == "Supreme Pizza") {
				newPizza = new PizzaSauce(new Mozzarella(new Bacon(new Onion(new BeefMince(new Capsicum(new Pepperoni(new Mushroom(new Olive(new PlainPizza())))))))));	
			}
			else if (name == "Prawn Pizza") {
				newPizza = new PizzaSauce(new Mozzarella(new GarlicButterPrawn(new Onion(new Chilli(new Capsicum(new Rocket(new PlainPizza())))))));
			}
			else if (name == "Kale Pizza") {
				newPizza = new PizzaSauce(new Mozzarella(new Sausage(new Kale(new PlainPizza()))));	
			}
			else if (name == "Meat Lover Pizza") {
				newPizza = new BBQSauce(new Mozzarella(new Pepperoni(new Bacon(new Cabanossi(new BeefMince(new Ham(new PlainPizza())))))));			
			}

			return newPizza;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PizzaMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ show_receipt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PizzaMenu::typeid));
			this->show_receipt = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->supremeBtn = (gcnew System::Windows::Forms::Button());
			this->prawnBtn = (gcnew System::Windows::Forms::Button());
			this->meatLoverBtn = (gcnew System::Windows::Forms::Button());
			this->kaleBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// show_receipt
			// 
			this->show_receipt->Location = System::Drawing::Point(455, 12);
			this->show_receipt->Name = L"show_receipt";
			this->show_receipt->Size = System::Drawing::Size(75, 23);
			this->show_receipt->TabIndex = 2;
			this->show_receipt->Text = L"0";
			this->show_receipt->UseVisualStyleBackColor = true;
			this->show_receipt->Click += gcnew System::EventHandler(this, &PizzaMenu::button3_Click);
			// 
			// btn1
			// 
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->ForeColor = System::Drawing::SystemColors::Control;
			this->btn1->Location = System::Drawing::Point(51, 45);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(200, 270);
			this->btn1->TabIndex = 7;
			this->btn1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &PizzaMenu::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->ForeColor = System::Drawing::SystemColors::Control;
			this->btn2->Location = System::Drawing::Point(223, 45);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(200, 270);
			this->btn2->TabIndex = 8;
			this->btn2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &PizzaMenu::btn2_Click_1);
			// 
			// btn3
			// 
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->ForeColor = System::Drawing::SystemColors::Control;
			this->btn3->Location = System::Drawing::Point(269, 288);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(200, 270);
			this->btn3->TabIndex = 9;
			this->btn3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &PizzaMenu::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->ForeColor = System::Drawing::SystemColors::Control;
			this->btn4->Location = System::Drawing::Point(51, 279);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(200, 270);
			this->btn4->TabIndex = 10;
			this->btn4->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &PizzaMenu::btn4_Click);
			// 
			// supremeBtn
			// 
			this->supremeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"supremeBtn.BackgroundImage")));
			this->supremeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->supremeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->supremeBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->supremeBtn->Location = System::Drawing::Point(550, 309);
			this->supremeBtn->Name = L"supremeBtn";
			this->supremeBtn->Size = System::Drawing::Size(197, 271);
			this->supremeBtn->TabIndex = 3;
			this->supremeBtn->UseVisualStyleBackColor = true;
			this->supremeBtn->Click += gcnew System::EventHandler(this, &PizzaMenu::supremeBtn_Click);
			// 
			// prawnBtn
			// 
			this->prawnBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prawnBtn.BackgroundImage")));
			this->prawnBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->prawnBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prawnBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->prawnBtn->Location = System::Drawing::Point(799, 309);
			this->prawnBtn->Name = L"prawnBtn";
			this->prawnBtn->Size = System::Drawing::Size(201, 271);
			this->prawnBtn->TabIndex = 4;
			this->prawnBtn->UseVisualStyleBackColor = true;
			this->prawnBtn->Click += gcnew System::EventHandler(this, &PizzaMenu::prawnBtn_Click);
			// 
			// meatLoverBtn
			// 
			this->meatLoverBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"meatLoverBtn.BackgroundImage")));
			this->meatLoverBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->meatLoverBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->meatLoverBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->meatLoverBtn->Location = System::Drawing::Point(799, 12);
			this->meatLoverBtn->Name = L"meatLoverBtn";
			this->meatLoverBtn->Size = System::Drawing::Size(197, 271);
			this->meatLoverBtn->TabIndex = 6;
			this->meatLoverBtn->UseVisualStyleBackColor = true;
			this->meatLoverBtn->Click += gcnew System::EventHandler(this, &PizzaMenu::meatLoverBtn_Click);
			// 
			// kaleBtn
			// 
			this->kaleBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kaleBtn.BackgroundImage")));
			this->kaleBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->kaleBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kaleBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->kaleBtn->Location = System::Drawing::Point(550, 12);
			this->kaleBtn->Name = L"kaleBtn";
			this->kaleBtn->Size = System::Drawing::Size(197, 271);
			this->kaleBtn->TabIndex = 5;
			this->kaleBtn->UseVisualStyleBackColor = true;
			this->kaleBtn->Click += gcnew System::EventHandler(this, &PizzaMenu::kaleBtn_Click);
			// 
			// PizzaMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 592);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->meatLoverBtn);
			this->Controls->Add(this->kaleBtn);
			this->Controls->Add(this->prawnBtn);
			this->Controls->Add(this->supremeBtn);
			this->Controls->Add(this->show_receipt);
			this->Name = L"PizzaMenu";
			this->Text = L"PizzaMenu";
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e){
	Pizza* cheesePizza = new Mozzarella(new PlainPizza());
	
	SuccessfulNotification^ notify = gcnew SuccessfulNotification;
	notify->ShowDialog();
	//cart::addOrder(cheesePizza->getDescription(), cheesePizza->getCost());
	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());
		
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Pizza* baconPizza = new Bacon(new PlainPizza());
	
	SuccessfulNotification^ notify = gcnew SuccessfulNotification;
	notify->ShowDialog();
	//cart::addOrder(baconPizza->getDescription(), baconPizza->getCost());
	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());
}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

// show receipt button
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Receipt^ receipt = gcnew Receipt;
	receipt->ShowDialog();
}
private: System::Void supremeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Pizza* supremePizza = new PizzaSauce(new Mozzarella(new Bacon(new Onion(new BeefMince(new Capsicum(new Pepperoni(new Mushroom(new Olive(new PlainPizza())))))))));
	System::String^ des = "Hot on the heels of pepperoni is Supreme, THE pizza I grew up with. The one rule I have about supreme? It’s gotta have at least TWO meats. Otherwise, it’s just another pizza….";
	System::String^ ingredients = supremePizza->getDescription();
	double cost = supremePizza->getCost();

	Description^ description = gcnew Description("Supreme Pizza", des, ingredients, cost);
	description->ShowDialog();

	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());
}
private: System::Void prawnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Pizza* prawnPizza = new PizzaSauce(new Mozzarella(new GarlicButterPrawn(new Onion(new Chilli(new Capsicum(new Rocket(new PlainPizza())))))));
	SuccessfulNotification^ notify = gcnew SuccessfulNotification;
	notify->ShowDialog();
	//cart::addOrder(prawnPizza->getDescription(), prawnPizza->getCost());
	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());
}
private: System::Void kaleBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Pizza* kalePizza = new PizzaSauce(new Mozzarella(new Sausage(new Kale(new PlainPizza()))));
	SuccessfulNotification^ notify = gcnew SuccessfulNotification;
	notify->ShowDialog();
	//cart::addOrder(kalePizza->getDescription(), kalePizza->getCost());
	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());
}
private: System::Void meatLoverBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Pizza* meatLoverPizza = new BBQSauce(new Mozzarella(new Pepperoni(new Bacon(new Cabanossi(new BeefMince(new Ham(new PlainPizza())))))));
	SuccessfulNotification^ notify = gcnew SuccessfulNotification;
	notify->ShowDialog();
	//cart::addOrder(meatLoverPizza->getDescription(), meatLoverPizza->getCost());
	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	Pizza* newPizza = makePizza(btn1->Text);
	std::vector<Item> items = data::getData();
	System::String^ des = gcnew String(items[0].description.c_str());
	System::String^ ingredients = newPizza->getDescription();
	System::String^ name = btn1->Text;

	double cost = newPizza->getCost();

	Description^ description = gcnew Description(name , des, ingredients, cost);
	description->ShowDialog();

	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());
}

private: System::Void btn2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Pizza* newPizza = makePizza(btn2->Text);
	std::vector<Item> items = data::getData();
	System::String^ des = gcnew String(items[0].description.c_str());
	System::String^ ingredients = newPizza->getDescription();
	System::String^ name = btn2->Text;

	double cost = newPizza->getCost();

	Description^ description = gcnew Description(name , des, ingredients, cost);
	description->ShowDialog();

	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());

}

private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	Pizza* newPizza = makePizza(btn3->Text);
	std::vector<Item> items = data::getData();
	System::String^ des = gcnew String(items[0].description.c_str());
	System::String^ ingredients = newPizza->getDescription();
	System::String^ name = btn3->Text;

	double cost = newPizza->getCost();

	Description^ description = gcnew Description(name , des, ingredients, cost);
	description->ShowDialog();

	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());

}

	  
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	Pizza* newPizza = makePizza(btn4->Text);
	std::vector<Item> items = data::getData();
	System::String^ des = gcnew String(items[0].description.c_str());
	System::String^ ingredients = newPizza->getDescription();
	System::String^ name = btn4->Text;

	double cost = newPizza->getCost();

	Description^ description = gcnew Description(name , des, ingredients, cost);
	description->ShowDialog();

	show_receipt->Text = System::Convert::ToString(cart::getNumberOfItems());

}
};
}
