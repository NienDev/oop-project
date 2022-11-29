#include "data.h"

void data::addItem(Item item) {
	items.push_back(item);
}

std::vector<Item> data::items{
				{
					"supremeBtn.BackgroundImage", 
					"Hot on the heels of pepperoni is Supreme, THE pizza I grew up with. The one rule I have about supreme? It’s gotta have at least TWO meats. Otherwise, it’s just another pizza…", 
"Supreme Pizza",
					12, 240
				},
				{
					"prawnBtn.BackgroundImage", 
					"Huge Aussie favourite, a pizza topped with garlic prawns AND finished with a drizzle of garlic butter. Heaven in the form of a pizza!","Prawn Pizza",
					180, 240
				},
				{
					"kaleBtn.BackgroundImage", "If there was ever a way to get someone to eat kale, this is it!", "Kale Pizza", 12, 12
				},
				{
					"meatLoverBtn.BackgroundImage", "You don’t even need to use a fancy BBQ sauce here. Any generic store bought BBQ sauce is fine – this one is all about the toppings!", "Meat Lover Pizza", 180, 12
				}
};

std::vector<Item> data::getData() {
	return items;
}
