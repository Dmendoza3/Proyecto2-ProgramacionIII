#include "Food.h"
#include "DogFood.h"
#include "CatFood.h"
#include "SnakeFood.h"
#include "Toys.h"
#include "Player.h"
#include <typeinfo>
#include <vector>
#include <fstream>
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
  virtual void play(Toys*, Player*)=0;
  virtual void giveMoney(Player*)=0;
  virtual void eat(Food*,Player*)=0;
  virtual void move()=0;
  virtual string drawEating()=0;
  virtual string drawPlaying()=0;

 };


  #endif
