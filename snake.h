#include "Pets.h"

#ifndef SNAKE_H_
#define SNAKE_H_

class snake : public Pets
{
public:
  //Constructores
  snake();
  snake(string);

  //funciones virtuales
  virtual void play();
  virtual void giveMoney();
  virtual void eat();
  virtual void move();
};

#endif
