#include <curses.h>

#ifndef TILE_H
#define TILE_H

class Tile
{
	protected:
		int foreRed;
		int foreGreen;
		int foreBlue;
		
		int backRed;
		int backGreen;
		int backBlue;
	
	public:
		//Constructor
		Tile();
		
		//Getter
		int[3] getForecolor();
		int[3] getBackcolor();

		//Setter
		void setForecolor(int, int, int);
		void setBackcolor(int, int, int);	

		//
		virtual void draw(int, int) = 0;

		//Operators
//		bool operator=(); //Compara getValue() con un numero		

		//Destructor
		virtual ~Tile(){};
};

#endif
