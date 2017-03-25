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
  virtual void play();
  virtual void giveMoney();
  virtual void eat();
  virtual void move();
};

#endif
