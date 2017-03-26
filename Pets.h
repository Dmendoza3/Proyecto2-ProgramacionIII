#include "Food.h"
#include "Toys.h"
#include <typeinfo>
#include <vector>
#include <string>

#ifndef  PETS_H_
#define PETS_H_

using namespace std;

class Pets
{
protected:
  string name;
  int stomach;
  int feeling;

public:

  //Constructores
  Pets();
  Pets(string);

  //Destructor
  ~Pets();

  //getter
  string getName();
  int getStomach();
  int getFeeling();

  //setter
  void setName(string);
  void setStomach(int);
  void setFeeling(int);

  //Funciones virtuales
  virtual void play(Toys*)=0;
  virtual int giveMoney()=0;
  virtual void eat(Food*)=0;
  virtual void move()=0;

 };


  #endif
