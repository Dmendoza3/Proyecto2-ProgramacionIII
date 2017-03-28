#include "dogs.h"

dogs::dogs(){}

dogs::dogs(string name1) : Pets(name1)
{
  y = 10;
  x = 10;
}

bool dogs::play(Items* t,Player* p)
{
  if (typeid(*t)==typeid(DogToy)) {
    feeling += t->action();
    if (feeling>100) {
      feeling = 100;
    }
    giveMoney(p);
    return true;
  }
  else {
    return false;
  }
}

void dogs::giveMoney(Player* p)
{
  int money = 50;
  money += p->getMoney();
  p->setMoney(money);
}



bool dogs::eat(Items* f, Player* p)
{
  if (typeid(*f)==typeid(DogFood)) {
    stomach+= f->action();
    if (stomach>100) {
      stomach = 100;
    }
    giveMoney(p);
    return true;
  }else {
    return false;
  }
}

void dogs::drawEating()
{
  ifstream in;
  in.open("dogeating.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line + '\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void dogs::drawPlaying()
{
  ifstream in;
  in.open("dogplaying.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line + '\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void dogs::drawing()
{
  ifstream in;
  in.open("dogs.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line + '\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void dogs::draw(int offx, int offy)
{
  mvprintw(x + offx,y*2 + offy,"%s","#");
}
