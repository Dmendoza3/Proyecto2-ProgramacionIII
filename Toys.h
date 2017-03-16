#include <iostream>
#include <string>
#include "Items.h"

#ifndef TOYS_H_
#define TOYS_H_

using namespace std;

class Toys : public Items
{
private:
  int effectiveness;

public:

  //Constructores
  Toys();
  Toys(double, int);

  //Destructor
  ~Toys();

  //getter
  int getEffectiveness();

  //setter
  void setEffectiveness(int);
};

#endif
