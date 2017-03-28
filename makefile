juego: CatFood.o cats.o CatToy.o DogFood.o dogs.o DogToy.o Floor.o Food.o Guest.o House.o Items.o Map.o Pets.o Player.o Principal.o snake.o SnakeFood.o SnakeToy.o Tile.o Toys.o User.o Wall.o
	g++ CatFood.o cats.o CatToy.o DogFood.o dogs.o DogToy.o Floor.o Food.o Guest.o House.o Items.o Map.o Pets.o Player.o Principal.o snake.o SnakeFood.o SnakeToy.o Tile.o Toys.o User.o Wall.o -o juego -lncurses -std=c++11

CatFood.o: Food.h CatFood.h CatFood.cpp
	g++ -c CatFood.cpp -lncurses -std=c++11

cats.o:	Pets.h cats.h cats.cpp
	g++ -c cats.cpp -lncurses -std=c++11

CatToy.o: Toys.h CatToy.h CatToy.cpp
	g++ -c CatToy.cpp -lncurses -std=c++11

DogFood.o:	Food.h DogFood.h DogFood.cpp
	g++ -C DogFood.cpp -lncurses -std=c++11

dogs.o: Pets.h dogs.h dogs.cpp
	g++ -c dogs.cpp -lncurses -std=c++11

DogToy.o:	Toys.h DogToy.h DogToy.cpp
	g++ -c DogToy.cpp -lncurses -std=c++11

Floor.o:	Floor.h Floor.cpp
	g++ -c Floor.cpp -lncurses -std=c++11

Food.o:	Items.h Food.h Food.cpp
	g++ -c Food.cpp -lncurses -std=c++11

Guest.o: User.h	Guest.h Guest.cpp
	g++ -c Guest.cpp -lncurses -std=c++11

House.o:	Pets.h dogs.h cats.h snake.h Items.h Food.h DogFood.h CatFood.h SnakeFood.h Toys.h User.h Player.h Guest.h Map.h House.h House.cpp
	g++ -c House.cpp -lncurses -std=c++11

Items.o:	Items.h Items.cpp
	g++ -c Items.cpp -lncurses -std=c++11

Map.o:	Tile.h cats.h dogs.h snake.h Map.h Map.cpp
	g++ -c Map.cpp -lncurses -std=c++11

Pets.o:	Food.h DogFood.h CatFood.h SnakeFood.h Toys.h DogToy.h CatToy.h SnakeToy.h Player.h Pets.h Pets.cpp
	g++ -c Pets.h -lncurses -std=c++11

Player.o:	User.h Items.h Pets.h Player.h Player.cpp
	g++ -c Player.cpp -lncurses -std=c++11

Principal.o:	House.h Principal.cpp
	g++ -c Principal.cpp -lncurses -std=c++11

snake.o:	Pets.h snake.h snake.cpp
	g++ -c snake.cpp -lncurses -std=c++11

SnakeFood.o: Food.h SnakeFood.h SnakeFood.cpp
	g++ -c SnakeFood.cpp -lncurses -std=c++11

SnakeToy.o:	Toys.h SnakeToy.h SnakeToy.cpp
	g++ -c SnakeToy.cpp -lncurses -std=c++11

Tile.o:	Tile.h Tile.cpp
	g++ -c Tile.cpp -lncurses -std=c++11

Toys.o:	Items.h Toys.h Toys.cpp
	g++ -c Toys.cpp -lncurses -std=c++11

User.o:	User.h User.cpp
	g++ -c User.cpp -lncurses -std=c++11

Wall.o:	Tile.h Wall.h Wall.cpp
	g++ -c Wall.cpp -lncurses -std=c++11
