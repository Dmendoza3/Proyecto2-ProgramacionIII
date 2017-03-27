#include "dogs.h"

dogs::dogs(){}

dogs::dogs(string name1) : Pets(name1)
{

}

void dogs::play(Toys* t,Player* p)
{
  feeling += t->action();
  if (feeling>100) {
    feeling = 100;
  }
  giveMoney(p);
}

void dogs::giveMoney(Player* p)
{
  int money = 50;
  money += p->getMoney();
  p->setMoney(money);
}



void dogs::eat(Food* f, Player* p)
{
  if (typeid(*f)==typeid(DogFood)) {
    stomach+= f->action();
    if (stomach>100) {
      stomach = 100;
    }
    giveMoney(p);
  }else {
    //cout << "Error no es la comida para el perro" << endl;
  }
}

void dogs::move()
{//TODO trabajar mas tarde en esta funcion

}

string dogs::drawEating()
{
  ifstream in;
  in.open("dogeating.txt");
  string line;
  while (!in.eof()) {
    getline(in,line);
  }
  return line;
}

string dogs::drawPlaying()
{
  ifstream in;
  in.open("dogplaying.txt");
  string line;
  while (!in.eof()) {
    getline(in,line);
  }
  return line;
}
