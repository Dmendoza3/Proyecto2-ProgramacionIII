#include "Food.h"

#ifndef DOGFOOD__H_
#define DOGFOOD__H_

using namespace std;

class DogFood : public Food
{
public:

  //Constructores
  DogFood();

  //getter virtual de descripcion de la Comida
  virtual string getDescription();

  //funcio virtual para la comida de perro
  virtual double getPrice();

  //funcion virtual de administracion para la accion de comida de perro
  virtual int action();
};

#endif
