#include "User.h"

#include <iostream>

using namespace std;

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

		//Operators
		friend ostream& operator<< (ostream& os, const Player& p)
        {
            os << p.name << "\n" << p.money;

            return os;
        }
		
		friend istream& operator>> (istream& is, Player& p)
        {
			string nname;
			int nmoney;

			getline(is, nname);
			is >> nmoney;

			p.setName(nname);
			p.setMoney(nmoney);
            return is;		
		}
};

#endif
