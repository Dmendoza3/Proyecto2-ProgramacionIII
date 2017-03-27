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
  virtual bool play(Toys*, Player*);
  virtual void giveMoney(Player*);
  virtual bool eat(Food*, Player*);
  virtual void drawEating();
  virtual void drawPlaying();
  virtual void drawing();
};

#endif
