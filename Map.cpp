#include "Map.h"
#include "Tile.h"

Map::Map()
{
	width = height = 50;
	Map = new Tile*[height];
	for(int i = 0; i < width; i++)
	{
		Map[width] = new Tile();
	}
}

void Map::setTile(int row, int col, Tile* nTile)
{
	delete map[row][col]; //TODO: invertir row y col
	map[row][col] = NULL;
	map[row][col] = nTile;
}
