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
  virtual void play();
  virtual void giveMoney();
  virtual void eat();
  virtual void move();

};

#endif
