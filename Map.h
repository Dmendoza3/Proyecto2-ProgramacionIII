#include "Tile.h"
/*#include ".h"
#include "Dog.h"
#include "Cat.h"*/

#ifndef MAP_H
#define MAP_H

class Map
{
	private:
		int width;
		int height;
		Tile ***map
	
	public:
		//Constructor
		Map();
		//Map(int, int); //Iniciar mapa

		//Setter
		void setTile(int, int, Tile*); //Posicion y valor

		//
		draw(int, int); //(desfase)

		//Destructor
		~Map(); //Limpiar mapa
}

#endif
