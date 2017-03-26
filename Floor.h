#ifndef FLOOR_H
#define FLOOR_H

class Floor : Tile
{	
	public:
		//Constructor
		Tile();
		
		//Getter
		virtual int getValue();

		//
		virtual void draw(int, int);

		//Destructor
		~FLoor();
}

#endif
