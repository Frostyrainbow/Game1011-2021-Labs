#pragma once
#include  "Game.h"
class Platform : public Game
{
private:
	string p_name;
	string p_manufacturer;
	//int p_arraySize;


public:
	Game listOfGames[3];
	//Getters
	string getPlatformName()
	{
		return p_name;
	}

	string getPlatformManufacturer()
	{
		return p_manufacturer;
	}

	/*int getArraySize()
	{
		return p_arraySize;
	}*/

	//Setters
	void setPlatformName(string name)
	{
		p_name = name;
	}

	void setPlatformManufacturer(string manufacturer)
	{
		p_manufacturer = manufacturer;
	}

	/*void setArraySize(int size)
	{
		p_arraySize = size;
	}*/

	//Function prototypes
	void addGame(Game gameToAdd, int arraycolum)
	{
		listOfGames[arraycolum] = gameToAdd;
		cout << "Game was added succsufuly" << endl;
	}

};