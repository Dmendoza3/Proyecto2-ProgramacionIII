#include "Pets.h"

#ifndef CATS_H_
#define CATS_H_

class cats : public Pets
{
public:
  //Constructores
  cats();
  cats(string);

  //funciones virtuales
  virtual void play(Toys*);
  virtual void giveMoney(int);
  virtual void eat(Food*);
  virtual void move();
};

#endif
