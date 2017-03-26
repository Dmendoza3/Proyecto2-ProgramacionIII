#include "cats.h"

cats::cats(){}

cats::cats(string name1) : Pets(name1)
{

}

void cats::play(Toys* t, Player* p)
{
  feeling += t->action();
  if (feeling>100) {
    feeling = 100;
  }
  giveMoney(p);
}

void cats::giveMoney(Player* p)
{
  int money = 40;
  money += p->getMoney();
  p->setMoney(money);
}

void cats::eat(Food* f, Player* p)
{
  if (typeid(*f)==typeid(CatFood)) {
    stomach += f->action();
    if (stomach>100) {
      stomach=100;
    }
    giveMoney(p);
  }else {
    //cout << "Error con la comida" << endl;
  }
}

void cats::move()
{//TODO: trabajar mas tarde con esta funcion

}
