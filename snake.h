#include "Pets.h"

#ifndef SNAKE_H_
#define SNAKE_H_

class snake : public Pets
{
public:
  //Constructores
  snake();
  snake(string);

  //funciones virtuales
  virtual bool play(Items*,Player*);
  virtual void giveMoney(Player*);
  virtual bool eat(Items*,Player*);
  virtual void drawEating();
  virtual void drawPlaying();
  virtual void drawing();
  virtual void draw(int, int);
};

#endif
