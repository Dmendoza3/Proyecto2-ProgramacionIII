#include <typeinfo>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

#include "Map.h"
#include "House.h"

bool session(User*, House*);
//bool modifyMap();

int run()
{
	bool game = true;
	House house;
	house.setMap(new Map(0, 20));
	house.load();
	srand(time(0));


	initscr(); //Terminal ncurses
	noecho();
	raw();
	keypad(stdscr, TRUE);
	start_color();
	curs_set(0);
	
    init_pair(4,COLOR_MAGENTA,COLOR_BLACK); //Floor
    init_pair(5,COLOR_CYAN,COLOR_CYAN); //Wall
    init_pair(7,COLOR_BLACK,COLOR_YELLOW); //Cursor

	init_color(COLOR_MAGENTA,222,222,888); //TODO: elegir color
	init_color(COLOR_CYAN,222,777,222);
	

	while(game)
	{
		char op = '\0';
		mvprintw(0, 0, "a. Iniciar como jugador.");
		mvprintw(1, 0, "b. Iniciar como invitado.");
		mvprintw(2, 0, "d. Salir\n");
					/*c. Modificar casa.\n*/
		op = getch();

		switch(op)
		{
			case 'a': while(session(house.getPlayer(), &house)); break; //TODO: Player*
			case 'b': while(session(house.getGuest(), &house)); break; //TODO: Guest*
			//case 'c': while(modifyMap()); break;
			case 'd': game = false;
		}
	}

	endwin();
	house.save();
	curs_set(1);
	return 0;
}

bool session(User* user, House* house)
{
	bool plyr = (typeid(*user) == typeid(Player)); //Revisar si el usuario es un jugador

	if (plyr)
		mvprintw(0, 0, "%s Dinero: %d", user->getName().c_str(), dynamic_cast<Player*>(user)->getMoney());
	else
		mvprintw(0, 0, "Invitado");


	int input = getch();
	int addX = 0, addY = 0;

	clear();
	refresh();
	
	//TODO: Enviar input al mapa
	switch(input)
	{
		case KEY_UP:{
			addX = -1;
			break;
		}

		case KEY_DOWN:{
			addX = 1;
			break;
		}

		case KEY_LEFT:{
			addY = -1;
			break;
		}

		case KEY_RIGHT:{
			addY = 1;
			break;
		}

		case 'q':{
			return false;
			break;
		}

		default:{
			if(!plyr)
				input = ' ';
			break;
		}
	}
	house->getMap()->userInput(addX, addY, input, house);
	return true;
}

/*bool modifyMap()
{
	bool plyr = (typeid(*user) == typeid(Player)); //Revisar si el usuario es un jugador
	
	clear();
	refresh();

	printMap(TODO, TODO); //TODO: Poner para metros

	char input = getch();

	switch(input)
	{
		case KEY_UP:{
			if(map[m.x - 1][m.y] == false) m.x--;
			break;
		}

		case KEY_DOWN:{
			if(map[m.x + 1][m.y] == false) m.x++;
			break;
		}

		case KEY_RIGHT:{
			if(map[m.x][m.y + 1] == false) m.y++;
			break;
		}

		case KEY_LEFT:{
			if(map[m.x][m.y - 1] == false) m.y--;
			break;
		}

		case 'p':{
			//Cambiar en el arreglo y poner pared en esa posicion
			break;
		}

		case ' ':{
			//Cambiar en el arreglo y poner suelo en esa posicion
			break;
		}
	
		case '1':{
			//Cambiar en el arreglo y poner restriccion no.1 en esa posicion
			break;
		}
		
		case '2':{
			//Cambiar en el arreglo y poner restriccion no.2 en esa posicion
			break;
		
		}
		
		case '3':{
			//Cambiar en el arreglo y poner restriccion no.3 en esa posicion
			break;
		}

		case 's':{
			//TODO: salir y guardar mapa
			break;
		}
		//Cambiar color
		mvprintw(cur.x + 7, cur.y * 2 + 7, "X"); //Mover cursos
				//Posicion * velocidad + desfase 
	}
}*/
