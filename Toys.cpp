#include "Toys.h"

Toys::Toys()
{

}

Toys::Toys(double pPrice, int effectiveness) : Items(pPrice)
{
  this->effectiveness = effectiveness;
}

Toys::~Toys()
{

}

int Toys::getEffectiveness()
{
  return effectiveness;
}

void Toys::setEffectiveness(int effectiveness)
{
  this->effectiveness = effectiveness;
}
