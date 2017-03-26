#include <string>

using namespace std;

#ifndef USER_H
#define USER_H

class User
{
	private:	
		string name;

	public:
		User(string);
		virtual ~User();
};

#endif
