#pragma once
#include "Achievement.h"
class Game : public Achievement
{
private:
	string g_name;
	string g_publisher;
	string g_developer;

	//Array of achements

public:
	Achievement listOfAchievements[5];

	//Getters
	string getGameName()
	{
		return g_name;
	}

	string getGamePublisher()
	{
		return g_publisher;
	}

	string getGameDeveloper()
	{
		return g_developer;
	}

	//Setters
	void setGameName(string name)
	{
		g_name = name;
	}

	void setGamePublisher(string publisher)
	{
		g_publisher = publisher;
	}

	void setGameDevloper(string developer)
	{
		g_developer = developer;
	}

	//function prototypes
	void addAchievement(Achievement achievementToAdd, int arraycolum)
	{
		listOfAchievements[arraycolum] = achievementToAdd;
		cout << "Achievement was added succsufuly" << endl;
	}

};