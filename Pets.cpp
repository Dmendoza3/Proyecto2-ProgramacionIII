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
  vector <Toys*> toys;
  vector <Food*> food;

public:

  //Constructores
  Pets();
  Pets(string);

  //Destructor
  ~Pets();

  //getter
  string getName();

  //setter
  void setName(string);

  //Funciones para la admisnitracion de los vectores
  //Agregar a los vectores
  void addToy(Toys*);
  void addFodd(Food*);
  //retorna el tamaño del vector
  int sizeToys();
  int sizeFoods();
  //Retorna un articulo del vector
  Toys* getToy(int);
  Food* getFood(int);
  //Funcion de eliminar articulos en los vectores
  void removeToy(int);
  void removeFood(int);

  //Funciones virtuales
  virtual void play()=0;
  virtual void giveMoney()=0;
  virtual void eat()=0;
  virtual void move()=0;
  virtual void restriction()=0;
};


#endif
