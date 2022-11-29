#pragma once
#include <iostream>
//using namespace std;

class Pizza {
public:
	virtual System::String^ getDescription() = 0;
	virtual double getCost() = 0;
};

class PlainPizza : public Pizza{
public:
	System::String^ getDescription() override {
		return "Plain Pizza";
	}
	double getCost() override {
		return 0.4;
	}
};


class ToppingDecorator : public Pizza {
protected:
	Pizza *pizza;
public:
	ToppingDecorator(Pizza* newPizza) {
		pizza = newPizza;
	}
	System::String^ getDescription() override {
		return pizza->getDescription();
	}
	double getCost() override {
		return pizza->getCost();
	}
};

class Mozzarella : public ToppingDecorator {
public:
	Mozzarella(Pizza* newPizza) : ToppingDecorator(newPizza) {}
	System::String^ getDescription() override {
		return pizza->getDescription() + ", cheese";
	}
	double getCost() override {
		return pizza->getCost() + 0.65;
	}
};

class Bacon : public ToppingDecorator {
public:
	Bacon(Pizza* newPizza) : ToppingDecorator(newPizza) {}
	System::String^ getDescription() override {
		return pizza->getDescription() + ", Bacon";
	}
	double getCost() override {
		return pizza->getCost() + 1.25;
	}
};

class PizzaSauce : public ToppingDecorator{
public:
	PizzaSauce(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription () override {
		return pizza->getDescription() + ", pizza sauce";
	}

	double getCost() override {
		return pizza->getCost() + 0.25;
	}
};

class Onion : public ToppingDecorator {
public:
	Onion(Pizza* newPizza) : ToppingDecorator(newPizza) {}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", onion";
	}

	double getCost() override {
		return pizza->getCost() + 0.15;
	}
};

class BeefMince : public ToppingDecorator {
public:
	BeefMince(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", beef mince";
	}
	
	double getCost() override {
		return pizza->getCost() + 2.25;
	}
};

class Capsicum : public ToppingDecorator {
public:
	Capsicum(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", capsicum";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.35;
	}
};

class Pepperoni : public ToppingDecorator {
public:
	Pepperoni(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", pepperoni";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.18;
	}
};

class Mushroom : public ToppingDecorator {
public:
	Mushroom(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", mushroom";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.68;
	}
};

class Olive : public ToppingDecorator {
public:
	Olive(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", olive";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.99;
	}
};

class Ham : public ToppingDecorator {
public:
	Ham(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", ham";
	}
	
	double getCost() override {
		return pizza->getCost() + 1.11;
	}
};

class Pineapple : public ToppingDecorator {
public:
	Pineapple(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", pineapple";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.554;
	}
};

class BBQSauce : public ToppingDecorator {
public:
	BBQSauce(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", BBQ sauce";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.69;
	}
};

class Cabanossi : public ToppingDecorator {
public:
	Cabanossi(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", cabanossi";
	}
	
	double getCost() override {
		return pizza->getCost() + 1.15;
	}
};

class GarlicButterPrawn : public ToppingDecorator {
public:
	GarlicButterPrawn(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", garlic butter prawns";
	}
	
	double getCost() override {
		return pizza->getCost() + 3.5;
	}
};

class Chilli : public ToppingDecorator {
public:
	Chilli(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", chillies";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.18;
	}
};

class Rocket : public ToppingDecorator {
public:
	Rocket(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", rocket";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.32;
	}
};

class Sausage : public ToppingDecorator {
public:
	Sausage(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", sausage";
	}
	
	double getCost() override {
		return pizza->getCost() + 1.23;
	}
};

class Kale : public ToppingDecorator {
public:
	Kale(Pizza* newPizza) : ToppingDecorator(newPizza) {
	}

	System::String^ getDescription() override {
		return pizza->getDescription() + ", kale";
	}
	
	double getCost() override {
		return pizza->getCost() + 0.34;
	}
};















