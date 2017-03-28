#include "Map.h"

Map::Map(int offx, int offy)
{
	width = height = 40;
	offX = offx;
	offY = offy;
	x = 10;
	y = 10;

	//TODO:Inicializar mapa
	map = new Tile**[width];
	for(int i = 0; i < width; i++)
		map[i] = new Tile*[height];

	for(int i = 0; i < width; i++)
		for(int j = 0; j < height; j++)
			if(i == 0 || i == width - 1 || j == 0 || j == height - 1)
				map[i][j] = new Wall();
			else
				map[i][j] = new Floor();
}

/*void Map::setTile(int row, int col, Tile* nTile)
{
	delete map[row][col]; //TODO: invertir row y col
	map[row][col] = NULL;
	map[row][col] = nTile;
}*/

void Map::draw(House* house)
{
	for(int i = 0; i < width; i++)
	{
		for(int j = 0; j < height; j++)
		{
			map[i][j]->draw(i + offX, j * 2 + offY);
		}
	}

	//dibujar mascotas
	for(int i = 0; i < house->getNPets(); i++)
		house->getPet(i)->draw(offX,offY);
}

Pets* Map::selectedPet(Map* map, House* house)
{
	for(int i = 0; i < house->getNPets(); i++)
	{
		Pets* p = house->getPet(i);
		if(x == p->getX() && y == p->getY()){
			return p;
		}
	}
	return NULL;
}

bool feed(Pets* selPet, House* house, Player* player)
{
	for(int i = 0; i < house->getNItems(); i++)
	{
		Items* selItem = house->getItem(i);
		if(selPet->eat(selItem, player))
		{
			house->delItem(i);
			selPet->drawEating();
			return true;
		}
	}
	return false;
}

bool play(Pets* selPet, House* house, Player* player)
{
	for(int i = 0; i < house->getNItems(); i++)
	{
		Items* selItem = house->getItem(i);
		if(selPet->play(selItem, player))
		{
			house->delItem(i);
			selPet->drawPlaying();
			return true;
		}
	}
	return false;
}

void shop(Player* player, House* house)
{
	//TODO
	mvprintw(0, 0, "1. Comprar comida para perro");
	mvprintw(1, 0, "2. Comprar comida para gato");
	mvprintw(2, 0, "3. Comprar comida para serpiente");
	mvprintw(3, 0, "4. Juguete de perro\n");
	mvprintw(4, 0, "5. Juguete de gato\n");
	mvprintw(5, 0, "6. Juguete de serpiente\n");
	mvprintw(6, 0, "->");

	char sel = getch();

	int money = player->getMoney();

	switch(sel)
	{
		case '1':{
			DogFood df;
			if(money >= df.getPrice())
			{
				house->addItem(new DogFood());
				money -= df.getPrice();
			}else printw("No tiene suficiente dinero.");
			break;
		}

		case '2':{
			CatFood cf;
			if(money >= cf.getPrice())
			{
				house->addItem(new CatFood());
				money -= cf.getPrice();
			}else printw("No tiene suficiente dinero.");
			break;
		}

		case '3':{
			SnakeFood sf;
			if(money >= sf.getPrice())
			{
				house->addItem(new SnakeFood());
				money -= sf.getPrice();
			}else printw("No tiene suficiente dinero.");
			break;
		}

		case '4':{
			DogToy dt;
			if(money >= dt.getPrice())
			{
				house->addItem(new DogToy());
				money -= dt.getPrice();
			}else printw("No tiene suficiente dinero.");
			break;
		}

		case '5':{
			CatToy ct;
			if(money >= ct.getPrice())
			{
				house->addItem(new CatToy());
				money -= ct.getPrice();
			}else printw("No tiene suficiente dinero.");
			break;
		}

		case '6':{
			SnakeToy st;
			if(money >= st.getPrice())
			{
				house->addItem(new SnakeToy());
				money -= st.getPrice();
			}else printw("No tiene suficiente dinero.");
			break;
		}
	}
	player->setMoney(money);
}

void printInventory(House* house)
{
	for(int i = 0; i < house->getNItems(); i++)
	{
		mvprintw(i, 0, "%d) %s", i, house->getItem(i)->getDescription().c_str());
	}
	refresh();
}

void Map::userInput(int addX, int addY, char action, House* house)
{
	if(x + addX >= 0 && x + addX < width && typeid(*map[x + addX][y]) != typeid(Wall)) x += addX;
	if(y + addY >= 0 && y + addY < height && typeid(*map[x][y + addY]) != typeid(Wall)) y += addY;
	
	draw(house);

	Pets* selPet = selectedPet(this, house);

	//TODO:llamar metodos
	switch(action)
	{
		case 'a':{
			if(selPet != NULL)
				if(!feed(selPet, house, house->getPlayer()))
					mvprintw(1, 0, "No tiene comida para esta mascota.");			
			break;
		}

		case 'j':{
			if(selPet != NULL)
				if(!play(selPet, house, house->getPlayer()))
					mvprintw(1, 0, "No tiene el juguete para esta mascota.");

			break;
		}

		case ' ':{
			//Ver mascota
			if(selPet != NULL)
				selPet->drawing();
			break;
		}
			
		case 'i':{
			//Mostrar inventario
			printInventory(house);
			getch();
			break;
		}	
		case 'c':{
			//Comprar
			shop(house->getPlayer(), house);
			break;
		}
	}

	
	attron(COLOR_PAIR(7));
	mvprintw(x + offX, (y * 2) + offY, "X");
	attroff(COLOR_PAIR(7));

	/*for(int i = 0; i < house->getNPets(); i++)
	{
		Pets* p = house->getPet(i);
		p->randMove();
	}*/
}
