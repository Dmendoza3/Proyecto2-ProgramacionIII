#include "Wall.h"

void Wall::draw(int row, int col)
{
	attron(COLOR_PAIR(5));

    mvprintw(row, col, ".");

    attroff(COLOR_PAIR(5));
}
