#include "Food.h"

using namespace std;

Food::Food()
{

}

Food::Food(double pPrice, string description) : Items(pPrice)
{
  this->description = description;
}

Food::~Food()
{

}

string Food::getDescription()
{
  return description;
}

void Food::setDescription(string description)
{
  this->description = description;
}
