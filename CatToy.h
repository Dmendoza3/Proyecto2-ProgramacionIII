#include "Toys.h"

#ifndef CATTOY_H_
#define CATTOY_H_

class CatToy : public Toys
{
public:
  //Constructores
  CatToy();

  //funciones virtuales
  virtual int getEffectiveness();
  virtual double getPrice();
  virtual int action();
  virtual string getDescription();
};

#endif
