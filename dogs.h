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
  virtual bool play(Items*,Player*);
  virtual void giveMoney(Player*);
  virtual bool eat(Items*,Player*);
  virtual void drawEating();
  virtual void drawPlaying();
  virtual void drawing();
  virtual void draw(int, int);
};

#endif
