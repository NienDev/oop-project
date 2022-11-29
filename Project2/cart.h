#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
//using namespace std;
ref class cart
{
private:
	static int numberOfItems = 0;
	static double total = 0;
	static array<System::String^>^ orders = gcnew array<System::String^>(1000);
	static array<System::String^>^ prices = gcnew array<System::String^>(1000);

public:
	cart() {
	}

		
	static void addOrder(System::String^ item, double price) {
		total += price;

		orders[numberOfItems] = item;
		prices[numberOfItems] = System::Convert::ToString(price);
		numberOfItems++;
	}

	static array<System::String^>^  getOrder() {
		return orders;
	}

	static array<System::String^>^ getPrices() {
		return prices;
	}

	static double getTotal() {
		return total;
	}
	
	static int getNumberOfItems() {
		return numberOfItems;
	}
};


