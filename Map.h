#include "dogs.h"
#include "cats.h"
#include "snake.h"
#include "Tile.h"
#include "Wall.h"
#include "Floor.h"

#include "House.h"
/*#ifndef HOUSE_INCLUDING_MAP
#define MAP_INCLUDING_HOUSE
#include "House.h"
#undef MAP_INCLUDING_HOUSE
#endif*/

#include <typeinfo>
#include <ncurses.h>

#ifndef MAP_H
#define MAP_H

class Map
{
	private:
		int x;
		int y;
		int width;
		int height;
		int offX;
		int offY;
		Tile*** map;
	
	public:
		//Constructor
		Map(int, int);
		//Map(int, int); //Iniciar mapa

		//Setter
		void setTile(int, int, Tile*); //Posicion y valor

		//
		void draw(House*);
		void userInput(int, int, char, House*); //addX, addY, action
		Pets* selectedPet(Map*, House*);

		//Destructor
		~Map(); //Limpiar mapa
};
#endif
