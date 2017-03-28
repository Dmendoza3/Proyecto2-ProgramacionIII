#include "snake.h"

snake::snake(){}

snake::snake(string name1) : Pets(name1)
{
  y = 14;
  x = 10;
}

bool snake::play(Items* t, Player* p)
{
  if (typeid(*t)==typeid(SnakeToy)) {
    feeling += t->action();
    if (feeling==100) {
      feeling = 100;
    }
    giveMoney(p);
    return true;
  }else {
    return false;
  }
}

void snake::giveMoney(Player* p)
{
  int money = 60;
  money += p->getMoney();
  p->setMoney(money);
}

bool snake::eat(Items* f, Player* p)
{
  if (typeid(*f)==typeid(SnakeFood)) {
    stomach += f->action();
    if (stomach==100) {
      stomach = 100;
    }
    giveMoney(p);
    return true;
  }else {
    return false;
  }
}

void snake::drawEating()
{
  ifstream in;
  in.open("snakeeating.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw +=line+'\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void snake::drawPlaying()
{
  ifstream in;
  in.open("snakeplaying.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line+'\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void snake::drawing()
{
  ifstream in;
  in.open("snake.txt");
  string line;
  string draw = "";
  while (!in.eof()) {
    getline(in,line);
    draw += line+'\n';
  }
  mvprintw(0,0,"%s",draw.c_str());
}

void snake::draw(int offx, int offy)
{
  mvprintw(x + offx, y*2 + offy,"%s","~");
}
