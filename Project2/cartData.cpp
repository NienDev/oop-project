#include "cartData.h"
#include <string>
#include <iostream>
using namespace System;
void MarshalString ( String ^ s, std::string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars =
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString ( String ^ s, std::wstring& os ) {
   using namespace Runtime::InteropServices;
   const wchar_t* chars =
      (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}
std::vector<CartItem> CartData::cartData{};
std::vector<CartItem> CartData::cartSoupData{};
std::vector<CartItem> CartData::getCartData() {
	return cartData;
}

void CartData::remove(int i) {
	cartData.erase(cartData.begin() + i);
}

void CartData::removeSoup(int i) {
	cartSoupData.erase(cartSoupData.begin() + i);
}

int CartData::find(System::String^ foodName) {
	int index = 0;
	for (CartItem item : cartData) {
		System::String^ tmp = gcnew String(item.foodName.c_str());
		if (tmp == foodName) {
			return index;
		}
		index++;
	}
	return -1;
}

void CartData::add(System::String^ foodName, System::String^ foodDescription, double price) {
	int i = -1;
	int tmpp = 0;
	for (CartItem item : cartData) {
		System::String^ tmp = gcnew String(item.foodName.c_str());
		if (tmp == foodName) {
			i = tmpp;
			break;
		}
		tmpp++;
	}
	if (i != -1) {
		cartData[i].amount = cartData[i].amount + 1;
		//CartItem newItem = cartData[i];
		//CartData::remove(i);
		//cartData.push_back(newItem);
	}
	else {
	std::string name = "";
	MarshalString(foodName, name);
	std::string description = "";
	MarshalString(foodDescription, description);
	CartItem newItem = { name, description, price, 1 };
	cartData.push_back(newItem);


	}
}

int CartData::getNumberOfItems() {
	return cartData.size();
}

void CartData::clear() {
	cartData.clear();
}
void CartData::addSoup(System::String^ foodName ,System::String^ foodDescription, double price) {
int i = -1;
	int tmpp = 0;
	for (CartItem item : cartSoupData) {
		System::String^ tmp = gcnew String(item.foodName.c_str());
		if (tmp == foodName) {
			i = tmpp;
			break;
		}
		tmpp++;
	}
	if (i != -1) {
		cartSoupData[i].amount = cartSoupData[i].amount + 1;
		//CartItem newItem = cartData[i];
		//CartData::remove(i);
		//cartData.push_back(newItem);
	}
	else {
	std::string name = "";
	MarshalString(foodName, name);
	std::string description = "";
	MarshalString(foodDescription, description);
	CartItem newItem = { name, description, price, 1 };
	cartSoupData.push_back(newItem);
	}

}

std::vector<CartItem> CartData::getCartSoupData() {
	return cartSoupData;
}

int CartData::getNumberOfSoups() {
	return cartSoupData.size();
}
