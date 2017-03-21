#include "Pets.h"

Pets::Pets(){}

Pets::Pets(string name)
{
  this->name=name;
  stomach=100;
  feeling=100;
}

Pets::~Pets()
{
  for (int i=0; i < foods.size(); i++){
    delete foods[i];
  }
  food.clear();
  for (int i=0; i<toys.size(); i++){
    delete toys[i];
  }
  toys.clear();
}

string Pets::getName()
{
  return name;
}

int Pets::getStomach()
{
  return stomach;
}

int Pets::getFeeling()
{
  return feeling;
}

void Pets::setName(string name)
{
  this->name = name;
}

void Pets::setStomach(int stomach)
{
  this->stomach = stomach;
}

void Pets::setFeeling(int feeling)
{
  this->feeling=feeling;
}

void Pets::addToy(Toys* t)
{
  toys.push_back(t);
}

void addFood(Food* f)
{
  foods.push_back(f);
}

int Pets::sizeToys()
{
  return toys.size();
}

int Pets::sizeFoods()
{
  return foods.size();
}

Toys* Pets::getToy(int i)
{
  return toys[i];
}

Food* Pets::getFood(int i)
{
  return foods[i];
}

void Pets::removeToy(int i)
{
  toys.erase(toys.begin()+i);
}

void Pets::removeFood(int i)
{
  foods.erase(foods.begin()+i);
}
