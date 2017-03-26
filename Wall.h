#include "Tile.h"

#ifndef WALL_H
#define WALL_H

class Wall : Tile
{
	public:
		//Constructor
		Wall();
		
		//Getter
        virtual int getValue();
	
		//
		virtual void draw(int, int);

		//destructor
		~Wall();
}

#endif
