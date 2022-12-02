#pragma once

class BunDauMamTomInterface
{
public:
  virtual System::String^ getDescription() = 0;
  virtual double getCost() = 0;
};

class BunDauMamTom : public BunDauMamTomInterface
{
public:
  System::String^ getDescription() override
  {
    return "rice noodles, deep-fried tofu, fermented shrimp paste, herbs";
    // basil, perilla leaves and some sliced fresh chili, kumquat juice
  }
  double getCost() override
  {
    return 3.00;
  }
};

class BToppingDecorator : public BunDauMamTomInterface
{
protected:
  BunDauMamTomInterface *tempBDMT;

public:
  BToppingDecorator(BunDauMamTomInterface *newBDMT)
  {
    tempBDMT = newBDMT;
  }
  System::String^ getDescription()
  {
    return tempBDMT->getDescription();
  }
  double getCost()
  {
    return tempBDMT->getCost();
  }
};

class BoiledPork : public BToppingDecorator
{
public:
  BoiledPork(BunDauMamTomInterface *newBDMT) : BToppingDecorator(newBDMT)
  {
  }
  System::String^ getDescription()
  {
    return tempBDMT->getDescription() + ", pork";
  }
  double getCost()
  {
    return tempBDMT->getCost() + .30;
  }
};

class FlakeMeatballs : public BToppingDecorator
{
public:
  FlakeMeatballs(BunDauMamTomInterface *newBDMT) : BToppingDecorator(newBDMT)
  {
  }
  System::String^ getDescription()
  {
    return tempBDMT->getDescription() + ", Vietnamese sweet rice flake meatballs";
  }
  double getCost()
  {
    return tempBDMT->getCost() + .50;
  }
};

class Sausagee : public BToppingDecorator
{
public:
  Sausagee(BunDauMamTomInterface *newBDMT) : BToppingDecorator(newBDMT)
  {
  }
  System::String^ getDescription()
  {
    return tempBDMT->getDescription() + ", fried pork sausage";
  }
  double getCost()
  {
    return tempBDMT->getCost() + .50;
  }
};

class CrabCake : public BToppingDecorator
{
public:
  CrabCake(BunDauMamTomInterface *newBDMT) : BToppingDecorator(newBDMT)
  {
  }
  System::String^ getDescription()
  {
    return tempBDMT->getDescription() + ", crab cake";
  }
  double getCost()
  {
    return tempBDMT->getCost() + .45;
  }
};

class NemChuaRan : public BToppingDecorator
{
public:
  NemChuaRan(BunDauMamTomInterface *newBDMT) : BToppingDecorator(newBDMT)
  {
  }
  System::String^ getDescription()
  {
    return tempBDMT->getDescription() + ", nem chua ran";
  }
  double getCost()
  {
    return tempBDMT->getCost() + .45;
  }
};

