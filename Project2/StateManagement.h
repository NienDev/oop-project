#pragma once
#include "data.h"
#include "cartData.h"
#include "pizza.h"
#include "soup.h"
#include "bundaumamtom.h"
#include "Description.h"

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

		static array<System::String ^> ^ btn_names = gcnew array<System::String ^>{"soupbtn", "bundaubtn", "pizzabtn"};

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
		static array<System::String ^> ^ btnImg_names = gcnew array<System::String ^>{"btn1", "btn2", "btn3", "btn4", "btn5", "btn6"};

	private:


	private:


	private:


	private:


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
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::ImageList^ imageList5;
	private: System::Windows::Forms::ImageList^ imageList6;
	private: System::Windows::Forms::ImageList^ imageList7;

	private: 
		array<System::Windows::Forms::Label ^> ^ quantities = gcnew array<System::Windows::Forms::Label ^>(100);
	private: Label^ total = gcnew Label;

	public:
		StateManagement(void)
		{
			InitializeComponent();
			index = 1;
			updateState(1);

			createCustomBtns();
			//
			// TODO: Add the constructor code here
			//
			for (int i = 0; i < 100; i++) {
				layouts[i] = gcnew System::Windows::Forms::PictureBox;
				foodNames[i] = gcnew System::Windows::Forms::Label;
				foodMoneys[i] = gcnew System::Windows::Forms::Label;
				icons[i] = gcnew System::Windows::Forms::PictureBox;
				exitBtns[i] = gcnew System::Windows::Forms::Button;
				quantities[i] = gcnew System::Windows::Forms::Label;

				layouts[i]->BackColor = System::Drawing::Color::White;
				layouts[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				layouts[i]->Size = System::Drawing::Size(320, 100);
				layouts[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				//layouts[i]->TabIndex = (i+1) * 100;
				layouts[i]->TabStop = false;
				layouts[i]->WaitOnLoad = true;
				layouts[i]->Name = "layout" + System::Convert::ToString(i);
				this->Controls->Add(layouts[i]);
			
					//foodNames[i]->TabIndex = 200;
				foodNames[i]->Size = System::Drawing::Size(50, 60);
				foodNames[i]->AutoSize = true;
				foodNames[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																													static_cast<System::Byte>(163)));
				foodNames[i]->Location = System::Drawing::Point(100, 20);
				foodNames[i]->BackColor = System::Drawing::Color::White;
				foodNames[i]->Name = "foodName" + System::Convert::ToString(i);
				layouts[i]->Controls->Add(foodNames[i]);

				foodMoneys[i]->AutoSize = true;
								foodMoneys[i]->Name = "money" + System::Convert::ToString(i);

				foodMoneys[i]->BackColor = System::Drawing::Color::White;
				foodMoneys[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																													 static_cast<System::Byte>(163)));
				foodMoneys[i]->Location = System::Drawing::Point(100, 50);
				foodMoneys[i]->Name = "foodMoney" + System::Convert::ToString(i);
				layouts[i]->Controls->Add(foodMoneys[i]);
				icons[i]->Name = "icon" + System::Convert::ToString(i);
				icons[i]->BackColor = System::Drawing::Color::White;
				icons[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
						icons[i]->Location = System::Drawing::Point(0, 0);
						icons[i]->Size = System::Drawing::Size(100, 100);
				icons[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				//icons[i]->TabIndex = 18;
				icons[i]->TabStop = false;

				layouts[i]->Controls->Add(icons[i]);

					exitBtns[i]->BackColor = System::Drawing::Color::White;
				exitBtns[i]->Location = System::Drawing::Point(280, 10);
				exitBtns[i]->Name = "btn" + System::Convert::ToString(i);
				exitBtns[i]->Size = System::Drawing::Size(30, 32);
				exitBtns[i]->UseVisualStyleBackColor = false;
				exitBtns[i]->Click += gcnew System::EventHandler(this, &StateManagement::exitBtn_Click);
				layouts[i]->Controls->Add(exitBtns[i]);

				quantities[i]->AutoSize = true;
				quantities[i]->BackColor = System::Drawing::Color::White;
				quantities[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																													 static_cast<System::Byte>(163)));
				quantities[i]->Location = System::Drawing::Point(280, 50);
				quantities[i]->Name = "quantities" + System::Convert::ToString(i);
				quantities[i]->Size = System::Drawing::Size(80, 25);
				//foodMoneys[i]->TabIndex = 20;
				layouts[i]->Controls->Add(quantities[i]);	

				layouts[i]->Hide();
			}
			total->Name = "total";
			total->Text = "Price: $0";
			total->Location = System::Drawing::Point(250, 650);
			total->BackColor = Color().White;
			total->Size = System::Drawing::Size(100, 20);
							total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																													 static_cast<System::Byte>(163)));
			pictureBox1->Controls->Add(total);

			Label^ priceLabel = gcnew Label;
			priceLabel->Name = "pricelabel";
			priceLabel->Text = "Price: ";
			priceLabel->Location = System::Drawing::Point(210, 660);
			priceLabel->BackColor = Color().White;
			priceLabel->Size = System::Drawing::Size(100, 20);
							total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																													 static_cast<System::Byte>(163)));
			pictureBox1->Controls->Add(priceLabel);
			updateCart();
		}

		void MarshalString ( String ^ s, std::string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars =
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

		int getImgIndex(std::string foodName) {
			if (index == 1) {
			if (foodName == "Supreme Pizza") {
				return 0;
			}
			else if (foodName == "Prawn Pizza") {
				return 1;
			}
			else if (foodName == "Kale Pizza") {
				return 2;
			}
			else if (foodName == "Meat Lover Pizza") {
				return 3;
			}
			else if (foodName == "Pepperoni Pizza") return 4;
			else if (foodName == "Hawaiian") return 5; 
			else return -1;

			}
			else if (index == 2) {
							if (foodName == "Chicken Soup") {
				return 0;
			}
			else if (foodName == "Crab Soup") {
				return 1;
			}
			else if (foodName == "Italian Meatball Soup") {
				return 2;
			}
			else if (foodName == "Tomato Basil Soup") {
				return 3;
			}
			else if (foodName == "Tom Yum") return 4;
			else if (foodName == "White Bean Chicken Soup") return 5; 
			else return -1;

			}
			else {
				if (foodName == "Bun Dau Mam Tom") {
					return 1;
				}
				else if (foodName == "Bun Dau Thit") {
					return 0;
				}
				else if (foodName == "Bun Dau Cha Com") {
					return 2;
				}
				else if (foodName == "Bun Dau Cha Cua") {
					return 4;
				}
				else if (foodName == "Bun Dau Doi Sun") return 3;
				else if (foodName == "Bun Dau Thap Cam") return 5;
				else return -1;
			}
		}

		void resetCart(int prevIndex) {
			int n;
			if (prevIndex == 1) n = CartData::getNumberOfItems();
			else  if (prevIndex== 2)n = CartData::getNumberOfSoups();
			else n = CartData::getNumberOfBundaumamtom();
			for (int i = 0; i < n; i++) {
				layouts[i]->Hide();
			}
				
		}

		void updateCart()
		{
			//remove
			//loop through all cart items, remove all of them
			std::vector<CartItem> data ;
			if (index == 1) data = CartData::getCartData();

			else if (index == 2) {
				data = CartData::getCartSoupData();
			}
			else data = CartData::getBundaumamtomData();

			// add
			int n;
			if (index == 1) {
				n = CartData::getNumberOfItems();
			}
			else if (index == 2) {
				n = CartData::getNumberOfSoups();
			}
			else n = CartData::getNumberOfBundaumamtom();

			for (int i = 0; i < n; i++)
			{
	/*			layouts[i] = gcnew System::Windows::Forms::PictureBox;
				foodNames[i] = gcnew System::Windows::Forms::Label;
				foodMoneys[i] = gcnew System::Windows::Forms::Label;
				icons[i] = gcnew System::Windows::Forms::PictureBox;
				exitBtns[i] = gcnew System::Windows::Forms::Button;*/
				
				layouts[i]->Show();
			
				layouts[i]->Location = System::Drawing::Point(600, 70 + 80*i);
				layouts[i]->BringToFront();	

				foodNames[i]->Text = gcnew String(data[i].foodName.c_str());
			
			

			
			
			
				foodMoneys[i]->Text = System::Convert::ToString(data[i].price);
			
				int imgIndex = getImgIndex(data[i].foodName);
				if (index == 1) {
				icons[i]->BackgroundImage = imageList4->Images[imgIndex];
				}
				else  if (index == 2) {
				icons[i]->BackgroundImage = imageList5->Images[imgIndex];

				}
				else icons[i]->BackgroundImage = imageList7->Images[imgIndex];


			
				

			
				//exitBtns[i]->TabIndex = 21;
				exitBtns[i]->Text = L"x";
			

			
				quantities[i]->Text = System::Convert::ToString(data[i].amount);
				
			}

			double sum = 0;
			for (CartItem item : data) {
				sum += item.price * item.amount;
			}
			total->Text = sum.ToString();

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
			else if (name == "Hawaiian") {
				newPizza = new PizzaSauce(new Mozzarella(new Ham(new Pineapple(new PlainPizza()))));
			}
			else if (name == "Pepperoni Pizza") {
				newPizza = new PizzaSauce(new Mozzarella(new Pepperoni(new PlainPizza())));
			}

			return newPizza;
		}

		Soup* makeSoup(System::String^ name) {
			Soup* newSoup;
			if (name == "Chicken Soup") {
				newSoup = new Chicken(new Carrot(new Celery(new ClearSoup())));
			}
			else if (name == "Tomato Basil Soup") {
				newSoup = new Tomato(new Carrot(new BasilLeaf(new Onionn(new Garlic(new OliveOil(new ChickenBroth(new ClearSoup())))))));
			}
			else if (name == "Crab Soup") {
				newSoup = new Chicken(new Crab(new Egg(new Corn(new Carrot(new Mushrooms(new Coriander(new RedShallot(new CornPowder(new ClearSoup())))))))));
			}
			else if (name == "Tom Yum") {
				newSoup = new Shrimp(new Mushrooms(new Tomato(new Lemongrass(new Garlic(new Lime(new KaffirLimeLeaf(new Onionn(new Coriander(new ThaiChilli(new EvaporatedMilk(new ClearSoup())))))))))));
			}
			else if (name == "White Bean Chicken Soup") {
				newSoup = new ChickenBroth(new WhiteBeans(new RoastedChicken(new Herbs(new ClearSoup()))));
			}
			else if (name == "Italian Meatball Soup") {
				newSoup = new Tomato(new Noodles(new ItalianPorkMeatballs(new ClearSoup())));
			}
			return newSoup;
		}

		BunDauMamTomInterface* makeBunDauMamTom(System::String^ name) {
			BunDauMamTomInterface* newBunDauMamTom;
			if (name == "Bun Dau Thit") {
				newBunDauMamTom = new BoiledPork(new BunDauMamTom());
			}
			else if (name == "Bun Dau Mam Tom") {
				newBunDauMamTom = new BunDauMamTom();
			}
			else if (name == "Bun Dau Cha Com") {
				newBunDauMamTom = new FlakeMeatballs(new BunDauMamTom());
			}
			else if (name == "Bun Dau Doi Sun") {
				newBunDauMamTom = new Sausagee(new BunDauMamTom());
			}
			else if (name == "Bun Dau Cha Cua") {
				newBunDauMamTom = new CrabCake(new BunDauMamTom());
			}
			else if (name == "Bun Dau Thap Cam") {
				newBunDauMamTom = new FlakeMeatballs(new Sausagee(new CrabCake(new NemChuaRan(new BoiledPork(new BunDauMamTom())))));
			}
			return newBunDauMamTom;
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
		void updateState(int prevIndex)
		{
			switch (index)
			{
			case 1:
				setDefaultBtn();
				pizzabtn->BackgroundImage = imageList1->Images[1];
				createCustomBtns();
				resetCart(prevIndex);
				updateCart();
				break;
			case 2:
				setDefaultBtn();
				soupbtn->BackgroundImage = imageList1->Images[3];
				createCustomBtns();
				resetCart(prevIndex);
				updateCart();
				break;
			case 3:
				setDefaultBtn();
				bundaubtn->BackgroundImage = imageList1->Images[5];
				createCustomBtns();
				resetCart(prevIndex);
				updateCart();
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
				items = data::getBunDauMamTom();
				break;
			}

			// data::addItem(items[0]);
			//int i = 0;
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StateManagement::typeid));
			for (int i = 0; i < 6; i++) {
				for each (Control ^ button in this->Controls)
				{
					if (button->Name == btnImg_names[i]) {
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
						button->BackgroundImage = imageList6->Images[i];
					}
					button->Text = gcnew String(items[i].name.c_str());

					break;
					}
				}
			}
			//for each (Control ^ button in this->Controls)
			//{
			//	if (isImgBtn(button->Name))
			//	{
			//		button->Location = System::Drawing::Point(items[i].x, items[i].y);
			//		String ^ str = gcnew String(items[i].img.c_str());
			//		// button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(str)));
			//		if (index == 1)
			//		{

			//			button->BackgroundImage = imageList2->Images[i];
			//		}
			//		else if (index == 2)
			//		{

			//			button->BackgroundImage = imageList3->Images[i];
			//		}
			//		else
			//		{
			//			button->BackgroundImage = imageList6->Images[i];
			//		}
			//		button->Text = gcnew String(items[i].name.c_str());
			//		//button->Name = gcnew String (items[i].name.c_str());
			//		i++;
			//	}
			//}
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
			this->imageList4 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->imageList5 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList6 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList7 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bundaubtn
			// 
			this->bundaubtn->BackColor = System::Drawing::Color::White;
			this->bundaubtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bundaubtn.BackgroundImage")));
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
			this->btn4->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(35, 439);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(200, 348);
			this->btn4->TabIndex = 14;
			this->btn4->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &StateManagement::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(251, 439);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(200, 348);
			this->btn3->TabIndex = 13;
			this->btn3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &StateManagement::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(241, 85);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(200, 348);
			this->btn2->TabIndex = 12;
			this->btn2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &StateManagement::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10, System::Drawing::FontStyle::Bold));
			this->btn1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(35, 85);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(200, 348);
			this->btn1->TabIndex = 11;
			this->btn1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn1->UseVisualStyleBackColor = false;
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
			this->imageList2->Images->SetKeyName(4, L"pine-pizza.png");
			this->imageList2->Images->SetKeyName(5, L"pepperoni-pizza.png");
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
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(767, -9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(503, 998);
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
			// imageList4
			// 
			this->imageList4->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList4.ImageStream")));
			this->imageList4->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList4->Images->SetKeyName(0, L"supreme-pizza-icon.png");
			this->imageList4->Images->SetKeyName(1, L"prawn-pizza-icon.png");
			this->imageList4->Images->SetKeyName(2, L"kale-pizza-icon.png");
			this->imageList4->Images->SetKeyName(3, L"meat-lover-pizza-icon.png");
			this->imageList4->Images->SetKeyName(4, L"pepperoni-pizza-icon.png");
			this->imageList4->Images->SetKeyName(5, L"pine-pizza-icon.png");
			// 
			// btn5
			// 
			this->btn5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(449, 85);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(200, 348);
			this->btn5->TabIndex = 17;
			this->btn5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &StateManagement::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(490, 439);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(200, 348);
			this->btn6->TabIndex = 18;
			this->btn6->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &StateManagement::btn6_Click);
			// 
			// imageList5
			// 
			this->imageList5->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList5.ImageStream")));
			this->imageList5->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList5->Images->SetKeyName(0, L"chicken-soup-icon.png");
			this->imageList5->Images->SetKeyName(1, L"crab-soup-icon.png");
			this->imageList5->Images->SetKeyName(2, L"Italian-Meatball-Soup-icon.png");
			this->imageList5->Images->SetKeyName(3, L"tomato-soup-icon.png");
			this->imageList5->Images->SetKeyName(4, L"tom-yum-soup-icon.png");
			this->imageList5->Images->SetKeyName(5, L"White-Bean-Chicken-Soup-icon.png");
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
			// imageList7
			// 
			this->imageList7->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList7.ImageStream")));
			this->imageList7->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList7->Images->SetKeyName(0, L"bun-dau-cha-cua-icon.png");
			this->imageList7->Images->SetKeyName(1, L"bun-dau-gio-sun-icon.png");
			this->imageList7->Images->SetKeyName(2, L"bun-dau-cha-com-icon.png");
			this->imageList7->Images->SetKeyName(3, L"bun-dau-thap-cam-icon.png");
			this->imageList7->Images->SetKeyName(4, L"bun-dau-thit-modified-icon.png");
			this->imageList7->Images->SetKeyName(5, L"bun-dau-mam-tom-icon.png");
			// 
			// StateManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->ClientSize = System::Drawing::Size(1266, 1055);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->pizzabtn);
			this->Controls->Add(this->soupbtn);
			this->Controls->Add(this->bundaubtn);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StateManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &StateManagement::StateManagement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
			int prevIndex = index;
			setIndex(1);
			updateState(prevIndex);
		}

	private:
		System::Void soupbtn_Click_1(System::Object ^ sender, System::EventArgs ^ e)
		{
			int prevIndex = index;
			setIndex(2);
			updateState(prevIndex);
		}

	private:
		System::Void bundaubtn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			int prevIndex = index;
			 setIndex(3);
			 updateState(prevIndex);
		}

	private:
		System::Void btn1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (index == 1) {

			std::vector<Item> data = data::getPizzas();
				Pizza* newPizza = makePizza(btn1->Text);
				CartData::add(btn1->Text, newPizza->getDescription(), newPizza->getCost());
				System::String^ des = gcnew String(data[0].description.c_str());
				System::String^ name = btn1->Text;
				System::String^ ingre = newPizza->getDescription();
				double cost = newPizza->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 0);
description->ShowDialog();
			}
			else if (index ==2) {

			std::vector<Item> data = data::getSoups();
				Soup* newSoup = makeSoup(btn1->Text);
				CartData::addSoup(btn1->Text, newSoup->getDescription(), newSoup->getCost());
								String^ tmp = gcnew String(data[0].description.c_str());
				Description^ description = gcnew Description(btn1->Text, tmp, newSoup->getDescription(), newSoup->getCost(), index, 0);
description->ShowDialog();
			}
			else {

			std::vector<Item> data = data::getBunDauMamTom();
				BunDauMamTomInterface* newBundaumamtom = makeBunDauMamTom(btn1->Text);
				CartData::addBundaumamtom(btn1->Text, newBundaumamtom->getDescription(), newBundaumamtom->getCost());
								String^ tmp = gcnew String(data[0].description.c_str());
				Description^ description = gcnew Description(btn1->Text, tmp, newBundaumamtom->getDescription(), newBundaumamtom->getCost(), index, 0);
description->ShowDialog();
			}
			

				
			updateCart();
		}

	private:
		System::Void exitBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			Button ^ btn = (Button ^) sender;
			PictureBox ^ layout = (PictureBox ^) btn->Parent;
			//layout->Hide();
			
			std::string id = "";
			MarshalString(layout->Name, id);
				
			id.erase(0, id.length()-1);

			int n;
			if (index == 1) n = CartData::getNumberOfItems();
			else  if (index == 2)n = CartData::getNumberOfSoups(); else n = CartData::getNumberOfBundaumamtom();

			for (int i = 0; i < n; i++) {
				layouts[i]->Hide();
			}
		
			if (index == 1) {

			CartData::remove(stoi(id));
			}
			else if (index == 2) {
				CartData::removeSoup(stoi(id));
			}
			else CartData::removeBundaumamtom(stoi(id));

			updateCart();
		}

	private:
		System::Void pictureBox2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{  
		}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
						if (index == 1) {
				Pizza* newPizza = makePizza(btn2->Text);
				CartData::add(btn2->Text, newPizza->getDescription(), newPizza->getCost());
					std::vector<Item> data = data::getPizzas();
	System::String^ des = gcnew String(data[1].description.c_str());
				System::String^ name = btn2->Text;
				System::String^ ingre = newPizza->getDescription();
				double cost = newPizza->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 1);
description->ShowDialog();
			}
						else  if (index == 2) {
							Soup* newSoup = makeSoup(btn2->Text);
							CartData::addSoup(btn2->Text, newSoup->getDescription(), newSoup->getCost());
								std::vector<Item> data = data::getSoups();
	System::String^ des = gcnew String(data[1].description.c_str());
				System::String^ name = btn2->Text;
				System::String^ ingre = newSoup->getDescription();
				double cost = newSoup->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 1);
description->ShowDialog();
						}
						else {
							BunDauMamTomInterface* newBundaumamtom = makeBunDauMamTom(btn2->Text);
							CartData::addBundaumamtom(btn2->Text, newBundaumamtom->getDescription(), newBundaumamtom->getCost());
								std::vector<Item> data = data::getBunDauMamTom();
	System::String^ des = gcnew String(data[1].description.c_str());
				System::String^ name = btn2->Text;
				System::String^ ingre = newBundaumamtom->getDescription();
				double cost = newBundaumamtom->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 1);
description->ShowDialog();
						}
			updateCart();
	}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
						if (index == 1) {
				Pizza* newPizza = makePizza(btn4->Text);
				CartData::add(btn4->Text, newPizza->getDescription(), newPizza->getCost());
					std::vector<Item> data = data::getPizzas();
	System::String^ des = gcnew String(data[3].description.c_str());
				System::String^ name = btn4->Text;
				System::String^ ingre = newPizza->getDescription();
				double cost = newPizza->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 3);
description->ShowDialog();
			}
						else if (index == 2) {
							Soup* newSoup = makeSoup(btn4->Text);
							CartData::addSoup(btn4->Text, newSoup->getDescription(), newSoup->getCost());
								std::vector<Item> data = data::getSoups();
	System::String^ des = gcnew String(data[3].description.c_str());
				System::String^ name = btn4->Text;
				System::String^ ingre = newSoup->getDescription();
				double cost = newSoup->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 3);
description->ShowDialog();
						}
						else {
								BunDauMamTomInterface* newBundaumamtom = makeBunDauMamTom(btn4->Text);
							CartData::addBundaumamtom(btn4->Text, newBundaumamtom->getDescription(), newBundaumamtom->getCost());
							std::vector<Item> data = data::getBunDauMamTom();
	System::String^ des = gcnew String(data[3].description.c_str());
				System::String^ name = btn4->Text;
				System::String^ ingre = newBundaumamtom->getDescription();
				double cost = newBundaumamtom->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 3);
description->ShowDialog();
						}
			updateCart();
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
						if (index == 1) {
				Pizza* newPizza = makePizza(btn3->Text);
				CartData::add(btn3->Text, newPizza->getDescription(), newPizza->getCost());
	std::vector<Item> data = data::getPizzas();
	System::String^ des = gcnew String(data[2].description.c_str());
				System::String^ name = btn3->Text;
				System::String^ ingre = newPizza->getDescription();
				double cost = newPizza->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 2);
description->ShowDialog();
			}
						else  if (index == 2) {
							Soup* newSoup = makeSoup(btn3->Text);
							CartData::addSoup(btn3->Text, newSoup->getDescription(), newSoup->getCost());
								std::vector<Item> data = data::getSoups();
	System::String^ des = gcnew String(data[2].description.c_str());
				System::String^ name = btn3->Text;
				System::String^ ingre = newSoup->getDescription();
				double cost = newSoup->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 2);
description->ShowDialog();
						}
						else {
											BunDauMamTomInterface* newBundaumamtom = makeBunDauMamTom(btn3->Text);
							CartData::addBundaumamtom(btn3->Text, newBundaumamtom->getDescription(), newBundaumamtom->getCost());
	std::vector<Item> data = data::getPizzas();
	System::String^ des = gcnew String(data[2].description.c_str());
				System::String^ name = btn3->Text;
				System::String^ ingre = newBundaumamtom->getDescription();
				double cost = newBundaumamtom->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 2);
description->ShowDialog();
						}
			updateCart();
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
						if (index == 1) {
				Pizza* newPizza = makePizza(btn5->Text);
				CartData::add(btn5->Text, newPizza->getDescription(), newPizza->getCost());
					std::vector<Item> data = data::getPizzas();
	System::String^ des = gcnew String(data[4].description.c_str());
				System::String^ name = btn5->Text;
				System::String^ ingre = newPizza->getDescription();
				double cost = newPizza->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 4);
description->ShowDialog();
			}
						else if (index == 2) {
							Soup* newSoup = makeSoup(btn5->Text);
							CartData::addSoup(btn5->Text, newSoup->getDescription(), newSoup->getCost());
								std::vector<Item> data = data::getSoups();
	System::String^ des = gcnew String(data[4].description.c_str());
				System::String^ name = btn5->Text;
				System::String^ ingre = newSoup->getDescription();
				double cost = newSoup->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 4);
description->ShowDialog();
						}
						else {
				BunDauMamTomInterface* newBundaumamtom = makeBunDauMamTom(btn5->Text);
							CartData::addBundaumamtom(btn5->Text, newBundaumamtom->getDescription(), newBundaumamtom->getCost());
	std::vector<Item> data = data::getBunDauMamTom();
	System::String^ des = gcnew String(data[4].description.c_str());
				System::String^ name = btn5->Text;
				System::String^ ingre = newBundaumamtom->getDescription();
				double cost = newBundaumamtom->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 4);
description->ShowDialog();
						}
			updateCart();
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
						if (index == 1) {
				Pizza* newPizza = makePizza(btn6->Text);
				CartData::add(btn6->Text, newPizza->getDescription(), newPizza->getCost());
					std::vector<Item> data = data::getPizzas();
	System::String^ des = gcnew String(data[5].description.c_str());
				System::String^ name = btn6->Text;
				System::String^ ingre = newPizza->getDescription();
				double cost = newPizza->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 5);
description->ShowDialog();
			}
						else  if (index == 2) {
							Soup* newSoup = makeSoup(btn6->Text);
							CartData::addSoup(btn6->Text, newSoup->getDescription(), newSoup->getCost());
								std::vector<Item> data = data::getSoups();
	System::String^ des = gcnew String(data[5].description.c_str());
				System::String^ name = btn6->Text;
				System::String^ ingre = newSoup->getDescription();
				double cost = newSoup->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 5);
description->ShowDialog();
						}
						else {
											BunDauMamTomInterface* newBundaumamtom = makeBunDauMamTom(btn6->Text);
							CartData::addBundaumamtom(btn6->Text, newBundaumamtom->getDescription(), newBundaumamtom->getCost());
	std::vector<Item> data = data::getBunDauMamTom();
	System::String^ des = gcnew String(data[5].description.c_str());
				System::String^ name = btn6->Text;
				System::String^ ingre = newBundaumamtom->getDescription();
				double cost = newBundaumamtom->getCost();
Description^ description = gcnew Description(name, des, ingre, cost, index, 5);
description->ShowDialog();
						}
			updateCart();
}
};
}
