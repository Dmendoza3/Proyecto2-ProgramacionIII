#include "Food.h"

#ifndef DOGFOOD__H_
#define DOGFOOD__H_

using namespace std;

class DogFood : Food
{
public:

  //Constructores
  DogFood();

  //getter virtual de descripcion de la Comida
  virtual string getDescription();

  //funcion virtual de administracion para la accion de comida de perro
  virtual int action(); 
};

#endif
