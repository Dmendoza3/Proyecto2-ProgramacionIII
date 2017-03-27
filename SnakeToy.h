#include "Toys.h"

#ifndef SNAKETOY_H_
#define SNAKETOY_H_

class SnakeToy : public Toys
{
public:
  //Constructor
  SnakeToy();

  //funciones virtuales
  virtual int getEffectiveness();
  virtual int action();
};

#endif
