#ifndef RESTRICTION_H
#define RESTRICTION_H

class Restriction : Tile
{
	public:
		//Constructor
		Restriction(int, int, char, int); //fore, back, char, value
		
		//Getter
		virtual int getValue();

		//Setter
		void setValue(int);		

		//
		virtual void draw(int, int);

		//Destructor
		~Restriction();
}

#endif
