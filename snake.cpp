#include "snake.h"

snake::snake(){}

snake::snake(string name1) : Pets(name1)
{}

void snake::play(Toys* t, PLayer* p)
{
  feeling += t->action();
  if (feeling==100) {
    feeling = 100;
  }
  giveMoney(p);
}

void snake::giveMoney(Player* p)
{
  int money = 60;
  money += p->getMoney();
  p->setMoney(money);
}

void snake::eat(Food* f, Player* p)
{
  if (typeid(*f)==typeid(SnakeFood)) {
    stomach += f->action();
    if (stomach==100) {
      stomach = 100;
    }
    giveMoney(p);
  }else {
    //cout << "Error con la comida" << endl;
  }
}

void snake::move()
{//TODO: trabajar mas tarde con esta funcion

}

string snake::drawEating()
{
  ifstream in;
  in.open("snakeeating.txt");
  string line;
  while (!in.eof()) {
    getline(in,line);
  }
  return line;
}

string snake::drawPlaying()
{
  ifstream in;
  in.open("snakeplaying.txt");
  string line;
  while (!in.eof()) {
    getline(in,line);
  }
  return line;
}
