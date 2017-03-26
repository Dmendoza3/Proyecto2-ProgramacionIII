#include <typeinfo>
#include <curses.h>

bool sessionPlayer();
bool sessionGuest();
bool modifyMap();

int run()
{
	bool game = true;

	initscr(); //Termina ncurses
	noecho();
	raw();
	keypad(stdscr, TRUE);
	cursor_set(0);
	
	init_pair(0,COLOR_RED,COLOR_BLACK);
    init_pair(1,COLOR_GREEN,COLOR_BLACK);
    init_pair(2,COLOR_BLUE,COLOR_BLACK);
    init_pair(3,COLOR_YELLOW,COLOR_BLACK);
    init_pair(4,COLOR_MAGENTA,COLOR_BLACK);
    init_pair(5,COLOR_CYAN,COLOR_BLACK);
    init_pair(6,COLOR_WHITE,COLOR_BLACK); //Text
    init_pair(7,COLOR_BLACK,COLOR_YELLOW); //Cursor

	

	while(game)
	{
		char op = '\0';
		mvprint(0,0,"a. Iniciar como jugador.\n
					b. Iniciar como invitado.\n
					c. Modificar casa.\n
					d. Salir\n");
		op = getch();

		switch(op)
		{
			case 'a': while(session(Player); break; //TODO: Player*
			case 'b': while(session(Guest); break; //TODO: Guest*
			case 'c': while(modifyMap()); break;
			case 'd': game = false;
		}
	}

	getch();
	endwin();
	return 0;
}

void draw()
{
	
}

void getInput()
{
	
}

//Imprimir el mapa
void printMap(int x, int y, int centerX, int centerY, int width, int height)
{
	//TODO: Dibujar el mapa en el centro de la terminal
}

bool session(User* user)
{
	struct cursor{int x,y;} cur;
	cur.x = cur.y = 0; //TODO: poner el cursor en centro

	bool plyr = (typeid(*user) == typeid(Player)); //Revisar si el usuario es un jugador
	
	clear();
	refresh();

	printMap(/*TODO, TODO*/); //TODO: Poner para metros

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

		case 'a':{
			//TODO: alimentar
			//if(usr) alimentar(buscarPrimerColision()); //si es jugador y alimenta a la mascora a la con la que hace colision
			//TODO: copiar en todas las opciones
			break;
		}

		case 'j':{
			//TODO: jugar
			break;
		}

		case 'i':{
			//TODO: Ver inventario
			break;
		}

		case 's':{
			//TODO: salir y guardar
			break;
		}

		case 'S':{
			//TODO: salir del programa y guardar
			break;
		}
		//Cambiar color
		mvprintw(cur.x + 7, cur.y * 2 + 7, "X"); //Mover cursos
				//Posicion * velocidad + desfase 
	}
}

bool modifyMap()
{
	struct cursor{int x,y;} cur;
	cur.x = cur.y = 0; //TODO: poner el cursor en centro

	bool plyr = (typeid(*user) == typeid(Player)); //Revisar si el usuario es un jugador
	
	clear();
	refresh();

	printMap(/*TODO, TODO*/); //TODO: Poner para metros

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
}
