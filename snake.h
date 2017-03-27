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
  virtual bool play(Toys*,Player*);
  virtual void giveMoney(Player*);
  virtual bool eat(Food*,Player*);
  virtual void drawEating();
  virtual void drawPlaying();
  virtual void drawing();
};

#endif
