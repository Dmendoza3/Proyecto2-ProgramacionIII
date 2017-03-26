#include "Pets.h"

#ifndef DOGS_H_
#define DOGS_H_

class dogs : public Pets
{
public:

  //Constructores
  dogs();
  dogs(string);

  //funciones virtuales
  virtual void play(Toys*);
  virtual void giveMoney(int);
  virtual void eat(Food*);
  virtual void move();

};

#endif
