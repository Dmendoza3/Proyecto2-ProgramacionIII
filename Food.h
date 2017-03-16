#include <iostream>
#include <string>
#include "Items.h"

#ifndef FOOD_H_
#define FOOD_H_

using namespace std;

class Food : public Items
{
private:
  string description;

public:

  //Constructores
  Food();
  Food(double, string);

  //Destructor
  ~Food();

  //getter
  virtual string getDescription();

  //setter
  virtual void setDescription(string);
};

#endif
