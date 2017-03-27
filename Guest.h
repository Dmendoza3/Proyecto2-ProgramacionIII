#include "User.h"

#ifndef GUEST_H
#define GUEST_H

class Guest : public User
{
	public:
		Guest();
		Guest(string);
};

#endif
