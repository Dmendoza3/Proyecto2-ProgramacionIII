#include <iostream>
#include <string>
#include "Items.h"

#ifndef FOOD_H_
#define FOOD_H_

using namespace std;

class Food : public Items
{
public:

  //Constructor
  Food();

  //Destructor
  ~Food();

  //getter
  virtual string getDescription();

  //funcion virtual para el precio del objeto
  virtual double getPrice()=0;

  //funcion de administracion virtual para la accion de la comida
  virtual int action()=0;
};

#endif
