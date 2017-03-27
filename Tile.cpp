#include "Tile.h"

Tile::Tile(){}

//Getters
int[3] Tile::getForecolor()
{
	return (int[3]){foreRed, foreGreen, foreBlue};
}

int[3] Tile::getBackcolor()
{
	return (int[3]){backRed, backGreen, backBlue};
}

//Setters
void Tile::setForecolor(int r, int g, int b)
{
	foreRed = r;
	foreGreen = g;
	foreBlue = b;
}

void Tile::setBackcolor(int r, int g, int b)
{
	backRed = r;
	backGreen = g;
	backBlue = b;
}
