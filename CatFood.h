#include "Food.h"

#ifndef CATFOOD_H_
#define CATFOOD_H_

using namespace std;

class CatFood : public Food
{
public:
  //Constructor
  CatFood();

  //getter virtual de descripcion
  virtual string getDescription();

  //funcion virtual del precio de la comida de gato
  virtual double getPrice();

  //funcion virtual de administracion para la accion de comida de gato
  virtual int action();
};



#endif
