#pragma once

class Soup
{
public:
    virtual System::String^ getDescription() = 0;
    virtual double getCost() = 0;
};

class ClearSoup : public Soup
{
public:
    System::String^ getDescription() override
    {
        return "water";
    }
    double getCost() override
    {
        return 2.00;
    }
};


class SToppingDecorator : public Soup
{
protected:
    Soup* tempSoup;

public:
    SToppingDecorator(Soup* newSoup)
    {
        tempSoup = newSoup;
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription();
    }
    double getCost()
    {
        return tempSoup->getCost();
    }
};
class Chicken : public SToppingDecorator
{
public:
    Chicken(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", chicken";
    }
    double getCost()
    {
        return tempSoup->getCost() + .45;
    }
};

class Carrot : public SToppingDecorator
{
public:
    Carrot(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", carrot";
    }
    double getCost()
    {
        return tempSoup->getCost() + .45;
    }
};

class Celery : public SToppingDecorator
{
public:
    Celery(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", celery";
    }
    double getCost()
    {
        return tempSoup->getCost() + .20;
    }
};

class Egg : public SToppingDecorator
{
public:
    Egg(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", egg";
    }
    double getCost()
    {
        return tempSoup->getCost() + .30;
    }
};

class Tomato : public SToppingDecorator
{
public:
    Tomato(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", tomato";
    }
    double getCost()
    {
        return tempSoup->getCost() + .45;
    }
};
class Onionn : public SToppingDecorator
{
public:
    Onionn(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", onion";
    }
    double getCost()
    {
        return tempSoup->getCost() + .45;
    }
};
class Garlic : public SToppingDecorator
{
public:
    Garlic(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", garlic";
    }
    double getCost()
    {
        return tempSoup->getCost() + .30;
    }
};

class BasilLeaf : public SToppingDecorator
{
public:
    BasilLeaf(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", basil leaf";
    }
    double getCost()
    {
        return tempSoup->getCost() + .10;
    }
};

class OliveOil : public SToppingDecorator
{
public:
    OliveOil(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", olive oil";
    }
    double getCost()
    {
        return tempSoup->getCost() + .50;
    }
};
class ChickenBroth : public SToppingDecorator
{
public:
    ChickenBroth(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", chicken broth";
    }
    double getCost()
    {
        return tempSoup->getCost() + .90;
    }
};

class Crab : public SToppingDecorator
{
public:
    Crab(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", crab";
    }
    double getCost()
    {
        return tempSoup->getCost() + 1.50;
    }
};
class Corn : public SToppingDecorator
{
public:
    Corn(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", corn";
    }
    double getCost()
    {
        return tempSoup->getCost() + .20;
    }
};
class Mushrooms : public SToppingDecorator
{
public:
    Mushrooms(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", mushrooms";
    }
    double getCost()
    {
        return tempSoup->getCost() + .30;
    }
};
class Coriander : public SToppingDecorator
{
public:
    Coriander(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", coriander";
    }
    double getCost()
    {
        return tempSoup->getCost() + .10;
    }
};
class RedShallot : public SToppingDecorator
{
public:
    RedShallot(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", red shallot";
    }
    double getCost()
    {
        return tempSoup->getCost() + .20;
    }
};
class CornPowder : public SToppingDecorator
{
public:
    CornPowder(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", corn powder";
    }
    double getCost()
    {
        return tempSoup->getCost() + .15;
    }
};
class Shrimp : public SToppingDecorator
{
public:
    Shrimp(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", shrimp";
    }
    double getCost()
    {
        return tempSoup->getCost() + 1.45;
    }
};

class Lemongrass : public SToppingDecorator
{
public:
    Lemongrass(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", lemongrass";
    }
    double getCost()
    {
        return tempSoup->getCost() + .10;
    }
};
class Lime : public SToppingDecorator
{
public:
    Lime(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", lime";
    }
    double getCost()
    {
        return tempSoup->getCost() + .15;
    }
};
class KaffirLimeLeaf : public SToppingDecorator
{
public:
    KaffirLimeLeaf(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", kaffir lime leaves";
    }
    double getCost()
    {
        return tempSoup->getCost() + .20;
    }
};
class ThaiChilli : public SToppingDecorator
{
public:
    ThaiChilli(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", Thai chilli paste";
    }
    double getCost()
    {
        return tempSoup->getCost() + .30;
    }
};
class EvaporatedMilk : public SToppingDecorator
{
public:
    EvaporatedMilk(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", evaporated milk";
    }
    double getCost()
    {
        return tempSoup->getCost() + .40;
    }
};
class WhiteBeans : public SToppingDecorator
{
public:
    WhiteBeans(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", white beans";
    }
    double getCost()
    {
        return tempSoup->getCost() + .99;
    }
};
class RoastedChicken : public SToppingDecorator
{
public:
    RoastedChicken(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", roasted chicken";
    }
    double getCost()
    {
        return tempSoup->getCost() + 2.66;
    }
};
class Herbs : public SToppingDecorator
{
public:
    Herbs(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", herbs";
    }
    double getCost()
    {
        return tempSoup->getCost() + .66;
    }
};
class Noodles : public SToppingDecorator
{
public:
    Noodles(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", noodles";
    }
    double getCost()
    {
        return tempSoup->getCost() + 1.11;
    }
};
class ItalianPorkMeatballs : public SToppingDecorator
{
public:
    ItalianPorkMeatballs(Soup* newSoup) : SToppingDecorator(newSoup)
    {
    }
    System::String^ getDescription()
    {
        return tempSoup->getDescription() + ", Italian Pork Meatballs";
    }
    double getCost()
    {
        return tempSoup->getCost() + 3.44;
    }
};







