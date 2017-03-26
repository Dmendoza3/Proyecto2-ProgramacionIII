#include <curses.h>

#ifndef TILE_H
#define TILE_H

class Tile
{
	private:
		int forecolor;
		int backcolor;
	
	public:
		//Constructor
		Tile();
		
		//Getter
		virtual int getValue();
		int getForecolor();
		int getBackcolor();

		//Setter
		void setForecolor(int);
		void setBackcolor(int);	

		//
		virtual void draw(int, int);

		//Operators
//		bool operator=(); //Compara getValue() con un numero		

		//Destructor
		virtual ~Tile();
};

#endif
