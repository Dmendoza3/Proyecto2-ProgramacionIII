#include "Items.h"

Items::Items()
{

}

Items::Items(double price)
{
  this->price = price;
}

Items::~Items()
{

}

double Items::getPrice()
{
  return price;
}

void Items::setPrice(double price)
{
  this->price = price;
}
