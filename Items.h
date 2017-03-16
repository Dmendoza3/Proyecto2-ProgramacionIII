#include <iostream>
#include <string>

#ifndef ITEMS_H_
#define ITEMS_H_

class Items
{
private:
  double price;

public:

  //Constructores
  Items();
  Items(double);

  //Destructor
  ~Items();

  //getter
  virtual double getPrice();

  //setter
  virtual void setPrice(double);

};

#endif
