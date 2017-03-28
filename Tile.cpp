#include "Tile.h"

Tile::Tile(){}

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
