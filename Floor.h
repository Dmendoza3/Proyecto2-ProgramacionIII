#include "Tile.h"

#ifndef FLOOR_H
#define FLOOR_H

class Floor : public Tile
{	
	public:
		//Constructor
		Floor();
		
		//
		virtual void draw(int, int);
};

#endif
