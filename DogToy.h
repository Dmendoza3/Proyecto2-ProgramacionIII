#include "Toys.h"

#ifndef DOGTOY_H_
#define DOGTOY_H_

class DogToy : public Toys
{
public:
  //cosntructor
  DogToy();

  //funciones virtuales
  virtual int getEffectiveness();
  virtual int action();
  virtual double getPrice();
};

#endif
