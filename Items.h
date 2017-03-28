#include <iostream>
#include <string>

using namespace std;

#ifndef ITEMS_H_
#define ITEMS_H_

class Items
{

public:

  //Constructor
  Items();

  //Destructor
  virtual ~Items();

  //getter virtual
  virtual double getPrice()=0;

  //funcion de administracion para las acciones de los objetos
  virtual int action()=0;
  virtual string getDescription()=0;

};

#endif
