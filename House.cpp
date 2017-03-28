#include "House.h"

House::House(){
	player = new Player("Jugador");
	guest = new Guest();
	addPet(new dogs("Perro"));
	addPet(new cats("Gato"));
	addPet(new snake("Serpiente"));
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

Items* House::getItem(int index)
{
	return items[index];
}

void House::delItem(int index)
{
	delete items[index];
	items.erase(items.begin() + index);
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

void House::save()
{
	ofstream oFile("save.txt");
	oFile << *player;
}

void House::load()
{
	ifstream iFile("save.txt");
	iFile >> *player;
}

//Setters
void House::addPet(Pets* npet)
{
	pets.push_back(npet);
}

void House::addItem(Items* nitem)
{
	items.push_back(nitem);
}

void House::setMap(Map* nMap)
{
	map = nMap;
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
