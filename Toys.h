#include <iostream>
#include <string>
#include "Items.h"

#ifndef TOYS_H_
#define TOYS_H_

using namespace std;

class Toys : public Items
{

public:

  //Constructores
  Toys();

  //Destructor
  ~Toys();

  //getter
  virtual int getEffectiveness()=0;

  //funcion virtual para los precios de los juguetes de las mascotas
  virtual double getPrice()=0;

  //funcion virtual de administracion apara la accion de los jueguetes
  virtual int action()=0;
  virtual string getDescription();
};

#endif
