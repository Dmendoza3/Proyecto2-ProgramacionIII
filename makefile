

CatFood.o: Food.h CatFood.h CatFood.cpp
	g++ -c CatFood.cpp

cats.o:	Pets.h cats.h cats.cpp
	g++ -c cats.cpp

CatToy.o: Toys.h CatToy.h CatToy.cpp
	g++ -c CatToy.cpp

DogFood.o:	Food.h DogFood.h DogFood.cpp
	g++ -C DogFood.cpp

dogs.o: Pets.h dogs.h dogs.cpp
	g++ -c dogs.cpp

DogToy.o:	Toys.h DogToy.h DogToy.cpp
	g++ -c DogToy.cpp

Floor.o:	Floor.h Floor.cpp
	g++ -c Floor.cpp

Food.o:	Items.h Food.h Food.cpp
	g++ -c Food.cpp

Guest.o: User.h	Guest.h Guest.cpp
	g++ -c Guest.cpp

Items.o:	Items.h Items.cpp
	g++ -c Items.cpp

Map.o:	Tile.h cats.h dogs.h snake.h Map.h Map.cpp
	g++ -c Map.cpp

Pets.o:	Food.h DogFood.h CatFood.h SnakeFood.h Toys.h DogToy.h CatToy.h SnakeToy.h Player.h Pets.h Pets.cpp
	g++ -c Pets.h

Player.o:	User.h Items.h Pets.h Player.h Player.cpp
	g++ -c Player.cpp

Principal.o: 
