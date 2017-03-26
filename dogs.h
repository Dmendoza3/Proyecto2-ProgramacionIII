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
  virtual void play(Toys*,Player*);
  virtual void giveMoney(Player*);
  virtual void eat(Food*,Player*);
  virtual void move();

};

#endif
