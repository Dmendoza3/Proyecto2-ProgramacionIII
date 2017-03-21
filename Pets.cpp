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
