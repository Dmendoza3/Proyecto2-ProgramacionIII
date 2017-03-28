#include "SnakeFood.h"

SnakeFood::SnakeFood()
{

}

string SnakeFood::getDescription()
{
  return "Comida especialmente de serpiente";
}

int SnakeFood::action()
{
  return 30;
}

double SnakeFood::getPrice()
{
  return 50;
}
