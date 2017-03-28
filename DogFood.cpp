#include "DogFood.h"

DogFood::DogFood()
{

}

string DogFood::getDescription()
{
  return "Comida especialmente para perros";
}

double DogFood::getPrice()
{
  return 40;
}

int DogFood:: action()
{
  return 30;
}
