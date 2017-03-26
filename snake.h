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
  virtual void play(Toys*,Player*);
  virtual void giveMoney(Player*);
  virtual void eat(Food*,Player*);
  virtual void move();
};

#endif
