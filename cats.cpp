#include "cats.h"

cats::cats(){}

cats::cats(string name1) : Pets(name1)
{
  y = 12;
  x = 10;
}

bool cats::play(Items* t, Player* p)
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

bool cats::eat(Items* f, Player* p)
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
    draw+=line + '\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void cats::drawPlaying()
{
  ifstream in;
  in.open("catplaying.txt");
  string line;
  string draw="";
  while (!in.eof()){
    getline(in,line);
    draw +=line+'\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void cats::drawing()
{
  ifstream in;
  in.open("cat.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line+'\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void cats::draw(int offx, int offy)
{
  mvprintw(x + offx,y * 2 + offy,"%s","&");
}
