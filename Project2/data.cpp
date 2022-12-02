#include "data.h"

void data::addItem(Item item) {
	items.push_back(item);
}

std::vector<Item> data::items{
				{
					"supremeBtn.BackgroundImage", 
					"Hot on the heels of pepperoni is Supreme, THE pizza I grew up with. The one rule I have about supreme? It’s gotta have at least TWO meats. Otherwise, it’s just another pizza…", 
"Supreme Pizza",
					12, 320
				},
				{
					"prawnBtn.BackgroundImage", 
					"Huge Aussie favourite, a pizza topped with garlic prawns AND finished with a drizzle of garlic butter. Heaven in the form of a pizza!","Prawn Pizza",
					340, 100
				},
				{
					"kaleBtn.BackgroundImage", "If there was ever a way to get someone to eat kale, this is it!", "Kale Pizza", 12, 100
				},
				{
					"meatLoverBtn.BackgroundImage", "You don’t even need to use a fancy BBQ sauce here. Any generic store bought BBQ sauce is fine – this one is all about the toppings!", "Meat Lover Pizza", 180, 100
				},{
				"", "If you think you don’t like Hawaiian pizza, that’s because you haven’t tried homemade! I used to be one of “those people”…", "Hawaiian", 180, 320
}, {
	"", "Lots of pepperoni, and lots of cheese! This firm favourite deserves it’s place at the top of the PizzazTin list.", "Pepperoni Pizza", 340, 320
}
};

std::vector<Item> data::soups{
	{
		"","Chicken soup is a soup made from chicken, simmered in water, usually with various other ingredients. The classic chicken soup consists of a clear chicken broth, often with pieces of chicken or vegetables; common additions are pasta, noodles, dumplings, or grains such as rice and barley.", "Chicken Soup", 
		12, 100
},{
	"","Tomato basil soup is a healthy classic that’s simple to make from scratch and full of flavor! It only takes just over half an hour. The whole family will enjoy it as the temperatures drop and the evenings become crisper.","Tomato Basil Soup", 
	180, 100
}, {
	"","She-crab soup is a rich soup, similar to bisque, made of milk or heavy cream, crab or fish stock, Atlantic blue crab meat, and crab roe, and a small amount of dry sherry added as it is plated.","Crab Soup", 
	340, 100
}, {
	"","Tom yum or tom yam is a type of hot and sour Thai soup, usually cooked with shrimp. The words 'tom yam'' are derived from two Thai words.Tom refers to the boiling process, while yam means 'mixed'.","Tom Yum", 
	12,320
},{
	"", "This soup is a slurpable, soothing, chicken broth-based soup, that's filled with white beans, roasted chicken, savory herbs, and hearty root vegetables. It's craveable on cold and rainy days.", "White Bean Chicken Soup", 180, 320
}, {
	"", "This soup is everything we love—it’s as easy as soup + meatballs! A tomato-y broth, noodles and some mini Italian pork meatballs make for a hearty supper everyone’s gonna love.", "Italian Meatball Soup", 340, 320
}
};

std::vector<Item> data::getPizzas() {
	return items;
}

std::vector<Item> data::getSoups() {
	return soups;
}
