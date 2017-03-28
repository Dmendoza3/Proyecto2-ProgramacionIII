#include "Food.h"
#include "DogFood.h"
#include "CatFood.h"
#include "SnakeFood.h"
#include "Toys.h"
#include "DogToy.h"
#include "CatToy.h"
#include "SnakeToy.h"
#include "Player.h"
#include <typeinfo>
#include <vector>
#include <fstream>
#include <ncurses.h>
#include <string>
#include <stdlib.h>
#include <time.h>

#ifndef  PETS_H_
#define PETS_H_

using namespace std;

class Pets
{
	protected:
		string name;
		int stomach;
		int feeling;
		int x;
		int y;

	public:
		//Constructores
		Pets();
		Pets(string);

		//Destructor
		virtual ~Pets(){}

		//getter
		string getName();
		int getStomach();
		int getFeeling();
		int getX();
		int getY();

		//setter
		void setName(string);
		void setStomach(int);
		void setFeeling(int);
		void setX(int);
		void setY(int);

		void randMove();

		//Funciones virtuales
		virtual bool play(Items*, Player*)=0;//TODO: cambiar este metodo en las clases hijas
		virtual void giveMoney(Player*)=0;
		virtual bool eat(Items*,Player*)=0;//TODO: cambiar este metodo en las clases hijas
		virtual void drawEating()=0;
		virtual void drawPlaying()=0;
		virtual void drawing()=0;
		virtual void draw(int, int)=0;
};
#endif
