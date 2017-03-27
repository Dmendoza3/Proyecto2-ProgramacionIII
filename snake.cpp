#include "snake.h"

snake::snake(){}

snake::snake(string name1) : Pets(name1)
{}

void snake::play(Toys* t, PLayer* p)
{
  if (typeid(*t)==typeid(SnakeToy)) {
    feeling += t->action();
    if (feeling==100) {
      feeling = 100;
    }
    giveMoney(p);
  }else {
      //cout << "Error en la comida" << endl;
  }
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

void snake::drawEating()
{
  ifstream in;
  in.open("snakeeating.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw +=line;
  }
  mvprintw(0,0,"%s",draw);
}

void snake::drawPlaying()
{
  ifstream in;
  in.open("snakeplaying.txt");
  string line;
  string draw="";
  while (!in.eof()) {
    getline(in,line);
    draw+=line;
  }
  mvprintw(0,0,"%s",draw);
}

void snake::drawing()
{
  ifstream in;
  in.open("snake.txt");
  string line;
  string draw = "";
  while (!in.eof()) {
    getline(in,line);
    draw += line;
  }
  mvprintw(0,0,"%s",draw);
}
