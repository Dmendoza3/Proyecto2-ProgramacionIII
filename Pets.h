#include "Food.h"
#include "Toys.h"
#include <vector>
#include <string>

#ifndef  PETS_H_
#define PETS_H_

using namespace std;

class Pets
{
private:
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
  virtual void play()=0;
  virtual void giveMoney()=0;
  virtual void eat()=0;
  virtual void move()=0;
  
 };


  #endif
