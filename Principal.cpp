#include <typeinfo>

#include <curses.h>

#include "House.h"

bool sessionPlayer();
bool sessionGuest();
bool modifyMap();

int run()
{
	bool game = true;
	House house;

	initscr(); //Termina ncurses
	noecho();
	raw();
	keypad(stdscr, TRUE);
	cursor_set(0);
	
	init_pair(0,COLOR_RED,COLOR_BLACK);
    init_pair(1,COLOR_GREEN,COLOR_BLACK);
    init_pair(2,COLOR_BLUE,COLOR_BLACK);
    init_pair(3,COLOR_YELLOW,COLOR_BLACK); //
    init_pair(4,COLOR_MAGENTA,COLOR_BLACK); //Floor
    init_pair(5,COLOR_CYAN,COLOR_CYAN); //Wall
    init_pair(6,COLOR_WHITE,COLOR_BLACK); //Text
    init_pair(7,COLOR_BLACK,COLOR_YELLOW); //Cursor

	init_color(COLOR_MAGENTA,222,222,222); //TODO: elegir color
	init_color(COLOR_CYAN,222,222,222);
	

	while(game)
	{
		char op = '\0';
		mvprint(0,0,"a. Iniciar como jugador.\n
					b. Iniciar como invitado.\n
					d. Salir\n");
					/*c. Modificar casa.\n*/
		op = getch();

		switch(op)
		{
			case 'a': while(session(house.getPlayer(), &house); break; //TODO: Player*
			case 'b': while(session(house.getGuest(), &house); break; //TODO: Guest*
			//case 'c': while(modifyMap()); break;
			case 'd': game = false;
		}
	}

	getch();
	endwin();
	return 0;
}

bool session(User* user, House* house)
{
	bool plyr = (typeid(*user) == typeid(Player)); //Revisar si el usuario es un jugador
	
	mvprintw(0, 0, "Bienvenido %s", user->getName())

	//clear();
	refresh();

	char input = getch();
	int addX = 0, addY = 0;

	//TODO: Enviar input al mapa
	switch(input)
	{
		case KEY_UP:{
			addX = -1
			break;
		}

		case KEY_DOWN:{
			addX = 1;
			break;
		}

		case KEY_RIGHT:{
			addY = 1;
			break;
		}

		case KEY_LEFT:{
			addY = -1;
			break;
		}

		case 'q':{
			return false;
			break;
		}

		default:{
			if(plyr)
				house->userInput(addX, addY, input, house);
			else(plyr)
				house->userInput(addX, addY, ' ', house);
			break;
		}
	}
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
