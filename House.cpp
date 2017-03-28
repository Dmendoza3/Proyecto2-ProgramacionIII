#include "House.h"

House::House(){
	player = new Player("Jugador");
	guest = new Guest();
}

//Getters
int House::getNPets()
{
	return pets.size();
}

int House::getNItems()
{
	return items.size();
}

Pets* House::getPet(int index)
{
	return pets[index];
}

Item* House::getItem(int index)
{
	return items[index];
}

void House::delItem(int index)
{
	delete items[index];
	items.erase(this->begin() + index);
}

Player* House::getPlayer()
{
	return player;
}

Guest* House::getGuest()
{
	return guest;
}

Map* House::getMap()
{
	return map;
}

//Setters
void addPet(Pets* npet)
{
	pets.push_back(npet);
}

void addItem(Items* nitem)
{
	items.push_back(nitem);
}

//Destructor
House::~House()
{
	vector<Pets*> pets;
	vector<Items*> items;
	Player* player;
	Guest* guest;
	Map* map;
}
