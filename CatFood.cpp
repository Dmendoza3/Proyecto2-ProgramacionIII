#include "CatFood.h"

CatFood::CatFood()
{

}

string CatFood::getDescription()
{
  return "Comida especialmente para gato";
}

double CatFood::getPrice()
{
  return 60;
}

int CatFood::action()
{
  return 20;
}
