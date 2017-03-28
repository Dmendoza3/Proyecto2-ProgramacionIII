#include <vector>

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

#include "User.h"
#include "Player.h"
#include "Guest.h"
#include "Map.h"

using namespace std;

#ifndef HOUSE_H
#define HOUSE_H

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
		Item* getItem(int);
		void delItem(int);
		Player* getPlayer();
		Guest* getGuest();
		Map* getMap();
		void save();
		void load();

		//Setters
		void addPet(Pets*);
		void addItem(Items*);

		//Destructor
		~House();
};

#endif
