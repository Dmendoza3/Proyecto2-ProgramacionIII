#include "Food.h"

#ifndef SNAKEFOOD_H_
#define SNAKEFOOD_H_

using namespace std;

class SnakeFood : public Food
{
public:

  //Constructor
  SnakeFood();

  //getter virtual de descripcion de la comida
  virtual string getDescription();

  //funcion virtual del precio de la comida de serpiente
  virtual double getPrice();

  //funcion virtual de administracion para la accion de la comida de serpiente
  virtual int action();
};

#endif
