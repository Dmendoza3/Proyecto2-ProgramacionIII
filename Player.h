#include "User.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player : public User
{
	private:
		int money;
		
	public:
		//Constructor
		Player();
		Player(string);

		//Getters
		int getMoney();

		//Setters
		void setMoney(int);
};

#endif
