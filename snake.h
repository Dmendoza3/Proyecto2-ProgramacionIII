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
  virtual void play(Toys*);
  virtual void giveMoney(int);
  virtual void eat(Food*);
  virtual void move();
};

#endif
