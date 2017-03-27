#include <string>

using namespace std;

#ifndef USER_H
#define USER_H

class User
{
	protected:	
		string name;

	public:
		User();
		User(string);
		string getName();
		virtual ~User(){};
};

#endif
