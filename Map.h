#include "House.h"
#include "dogs.h"
#include "cats.h"
#include "snake.h"
#include "Tile.h"

#include <typeinfo>

#ifndef MAP_H
#define MAP_H

struct cursor{
	int x,y;
};

class Map
{
	private:
		cursor cur;
		int width;
		int height;
		int offX;
		int offY;
		Tile ***map
	
	public:
		//Constructor
		Map(int, int);
		//Map(int, int); //Iniciar mapa

		//Setter
		void setTile(int, int, Tile*); //Posicion y valor

		//
		int draw(); //(desfase)
		void userInput(int, int, char, House*); //addX, addY, action

		//Destructor
		~Map(); //Limpiar mapa
};

#endif
