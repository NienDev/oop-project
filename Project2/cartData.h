#pragma once
#include <vector>
#include <string>

struct CartItem {
	std::string foodName; 
	std::string description;
	double price;
	int amount;
};

class CartData {
private:
	static std::vector<CartItem> cartData;
	static std::vector<CartItem> cartSoupData;
public:
	static std::vector<CartItem> getCartData();
	static std::vector<CartItem> getCartSoupData();
	static void remove(int i);
	static void removeSoup(int i);
	static int find(System::String^ foodName);
	static void add(System::String^ foodName, System::String^ foodDescription, double price);
	static void addSoup(System::String^ foodName, System::String^ foodDescription, double price);
	static int getNumberOfItems();
	static int getNumberOfSoups();
	static void clear();
};


