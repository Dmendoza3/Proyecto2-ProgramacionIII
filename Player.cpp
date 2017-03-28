#include "Player.h"

//Constructor
Player::Player() : User(""){}

Player::Player(string name) : User(name)
{
	money = 5000;
}

//Getters
int Player::getMoney()
{
	return money;
}

//Setters
void Player::setMoney(int nMoney)
{
	money = nMoney;
}

