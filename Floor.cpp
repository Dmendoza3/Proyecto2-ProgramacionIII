#include "Floor.h"

Floor::Floor(){}

void Floor::draw(int row, int col)
{
	attron(COLOR_PAIR(4));

	mvprintw(row, col, "W");

	attroff(COLOR_PAIR(4));
}

