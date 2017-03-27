#include "Map.h"

Map::Map(int offx, int offy)
{
	width = height = 50;
	offX = offx;
	offY = offy;
	cur.x = offx;
	cur.y = offy;

	//TODO:Inicializar mapa
}

/*void Map::setTile(int row, int col, Tile* nTile)
{
	delete map[row][col]; //TODO: invertir row y col
	map[row][col] = NULL;
	map[row][col] = nTile;
}*/

void Map::draw()
{
	for(int i = 0; i < width; i++)
	{
		for(int j = 0; j < height; j++)
		{
			map[i][j]->draw(i + offX, j * 2 + offY);
		}
	}
	mvprintw(cur.x + offX, cur.y * 2 + offY, "X");
	//dibujar mascotas
}

Pets* selectedPet(House* house)
{
	for(int i = 0; i < house->getNPets(); i++)
	{
		Pets* p = house->getPet(i);
		if(cur.x == p->getX() && cur.y == p->getY())
			return p;
	}
	return NULL;
}

bool feed(Pets* selPet, House* house)
{
	for(int i = 0; i < house->getNItems(); i++)
	{
		selItem = house->getItem(i);
		if(selPet->eat(selItem))
		{
			house->delItem(i);
			return true;
		}
	}
	return false;
}

bool play(Pets* selPet, House* house)
{
	for(int i = 0; i < house->getNItems(); i++)
	{
		selItem = house->getItem(i);
		if(selPet->play(selItem))
		{
			house->delItem(i);
			return true;
		}
	}
	return false;
}

void shop(Player* player)
{
	//TODO
	mvprintw(0, 0, "1. Comprar comida para perro");
}

void printInventory(House* house)
{
	for(int i = 0; i < house->getNItems(); i++)
	{
		if(typeid(house->getItem(i)) == typeid(Food))
			mvpritw(0, i, "%s",((Food)house->getItem(i))->getDescription())
	}
}

void Map::userInput(int addX, int addY, char action, House* house)
{
	if(map[cur.x + addX][cur.y] == false) cur.x += addX;
	if(map[cur.x][cur.y + addY] == false) cur.y += addY;
	
	draw();

	Pets* selPet = selectedPet();
	
	//TODO:llamar metodos
	if(selPet != NULL){
		switch(action)
		{
			case 'a':{
				if(!feed(selPet, house))
					mvprintw(0, 0, "No tiene comida para esta mascota.");
				
				break;
			}

			case 'j':{
				if(!play(selPet, house))
					mvprintw(0, 0, "No tiene el juguete para esta mascota.");

				break;
			}
				
			case 'i':{
				//Mostrar inventario
				printInventory(house);
			}
			
			case 'c':{
				//Comprar
				shop(house->getPlayer());
				break;
			}

			case ' ':{
				//Ver mascota
				selPet->drawing();
				break;
			}
		}
	}
}
