#pragma once
#include <string>
#include <vector>
struct Item {
	std::string img;
	std::string description;
	std::string name;
	int x; 
	int y;
};

class data
{
private:
	static std::vector<Item> items;
public:

	static void addItem(Item item);
	static std::vector<Item> getData();
};

