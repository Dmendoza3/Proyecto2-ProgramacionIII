#include "Tile.h"

#ifndef WALL_H
#define WALL_H

class Wall : public Tile
{
	public:
		//Constructor
		Wall();
		
		//
		virtual void draw(int, int);
}

#endif
