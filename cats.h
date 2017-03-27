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
  virtual void play(Toys*, Player*);
  virtual void giveMoney(Player*);
  virtual void eat(Food*, Player*);
  virtual void move();
  virtual string drawEating();
  virtual string drawPlaying();
};

#endif
