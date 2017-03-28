#include <iostream>
#include <string>

#ifndef ITEMS_H_
#define ITEMS_H_

class Items
{

public:

  //Constructor
  Items();

  //Destructor
  ~Items();

  //getter virtual
  virtual double getPrice()=0;

  //funcion de administracion para las acciones de los objetos
  virtual int action()=0;

};

#endif
