#include "Pets.h"

Pets::Pets(){}

Pets::Pets(string name)
{
  this->name=name;
  stomach=100;
  feeling=100;
}

string Pets::getName()
{
  return name;
}

int Pets::getStomach()
{
  return stomach;
}

int Pets::getFeeling()
{
  return feeling;
}

void Pets::setName(string name)
{
  this->name = name;
}

void Pets::setStomach(int stomach)
{
  this->stomach = stomach;
}

void Pets::setFeeling(int feeling)
{
  this->feeling=feeling;
}

void Pets::setX(int nx)
{
	x = nx;
}

void Pets::setY(int ny)
{
	y = ny;
}

int Pets::getX()
{
	return x;
}

int Pets::getY()
{
	return y;
}

/*void Pets::randMove()
{
	int nX,nY;
	nX = rand() % 1 - 1;
	nY = rand() % 1 - 1;

	x += nX;
	if(x < 0)
		x = 49;
	y += nY;
	if(y < 0)
		y = 49;
}*/
