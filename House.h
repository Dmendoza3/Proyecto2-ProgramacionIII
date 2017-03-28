#include <vector>
#include <fstream>

/*#ifndef MAP_INCLUDING_HOUSE
#define HOUSE_INCLUDING_MAP
#include "Map.h"
#undef HOUSE_INCLUDING_MAP
#endif*/

#include "Pets.h"
#include "dogs.h" 
#include "cats.h"
#include "snake.h"

#include "Items.h"
#include "Food.h"
#include "DogFood.h"
#include "CatFood.h"
#include "SnakeFood.h"

#include "Toys.h"
#include "DogToy.h"
#include "CatToy.h"
#include "SnakeToy.h"

#include "User.h"
#include "Player.h"
#include "Guest.h"

using namespace std;

#ifndef HOUSE_H
#define HOUSE_H

class Map;

class House
{
	private:
		vector<Pets*> pets;
		vector<Items*> items;
		Player* player;
		Guest* guest;
		Map* map;

	public:
		House();

		//Getter
		int getNPets();
		int getNItems();
		Pets* getPet(int);
		Items* getItem(int);
		void delItem(int);
		Player* getPlayer();
		Guest* getGuest();
		Map* getMap();
		void save();
		void load();

		//Setters
		void addPet(Pets*);
		void addItem(Items*);
		void setMap(Map*);

		//Destructor
		~House();
};

#endif
