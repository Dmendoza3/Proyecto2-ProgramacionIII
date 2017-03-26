#include <vector> //TODO:Cambiar por vector de boost

#include "User.h"
#include "Items.h"
//#include "Pet.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	private:
		int money;
		vector<Items*> inventoryItems;
		//vector<Pet*> listPets;
		
	public:
		//Constructor
		Guest(string);

		//Getters
		int getMoney();
		Items* getItem(int);

		//Setters
		void setMoney(int);
		void minMoney(int);
		void addMoney(int);
		void addItem(Items*);
		void useItem(int);
		//void addPet(Pet*);
};

#endif
