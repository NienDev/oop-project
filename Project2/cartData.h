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
	static std::vector<CartItem> bundaumamtomdata;
public:
	static std::vector<CartItem> getCartData();
	static std::vector<CartItem> getCartSoupData();
	static std::vector<CartItem> getBundaumamtomData();
	static void remove(int i);
	static void removeSoup(int i);
	static void removeBundaumamtom(int i);
	static int find(System::String^ foodName);
	static void add(System::String^ foodName, System::String^ foodDescription, double price);
	static void addSoup(System::String^ foodName, System::String^ foodDescription, double price);
	static void addBundaumamtom(System::String^ foodName, System::String^ foodDescription, double price);
	static int getNumberOfItems();
	static int getNumberOfSoups();
	static int getNumberOfBundaumamtom();
	static void clear();
};


