#include "dogs.h"

dogs::dogs(){}

dogs::dogs(string name1) : Pets(name1)
{

}

void dogs::play(Toys* t)
{
  feeling += t->action();
  if (feeling>100) {
    feeling = 100;
  }
}
