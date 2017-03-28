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
  virtual bool play(Items*, Player*);
  virtual void giveMoney(Player*);
  virtual bool eat(Items*, Player*);
  virtual void drawEating();
  virtual void drawPlaying();
  virtual void drawing();
  virtual void draw(int, int);
};

#endif
