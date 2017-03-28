#include "User.h"

User::User(){}

User::User(string nName)
{
	name = nName;
}

string User::getName()
{
	return name;
}

void User::setName(string nName)
{
	name = nName;
}
