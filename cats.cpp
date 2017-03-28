#include "cats.h"

cats::cats(){}

cats::cats(string name1) : Pets(name1)
{
  y = 12;
  x = 10;
}

bool cats::play(Toys* t, Player* p)
{
  if (typeid(*t)==typeid(CatToy)) {
    feeling += t->action();
    if (feeling>100) {
      feeling = 100;
    }
    giveMoney(p);
    return true;
  }else {
    return false;
  }
}

void cats::giveMoney(Player* p)
{
  int money = 40;
  money += p->getMoney();
  p->setMoney(money);
}

bool cats::eat(Food* f, Player* p)
{
  if (typeid(*f)==typeid(CatFood)) {
    stomach += f->action();
    if (stomach>100) {
      stomach=100;
    }
    giveMoney(p);
    return true;
  }else {
    return false;
  }
}

void cats::drawEating()
{
  ifstream in;
  in.open("cateating.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line;
  }
  mvprintw(0,0,"%s",draw);
}

void cats::drawPlaying()
{
  ifstream in;
  in.open("catplaying.txt");
  string line;
  string draw="";
  while (!in.eof()){
    getline(in,line);
    draw +=line;
  }
  mvprintw(0,0,"%s",draw);
}

void cats::drawing()
{
  ifstream in;
  in.open("cat.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line;
  }
  mvprintw(0,0,"%s",draw);
}

void cats::draw()
{
  mvprintw(x,y,"%s",'&');
}
