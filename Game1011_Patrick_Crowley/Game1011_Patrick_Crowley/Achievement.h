#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Achievement
{
private:
	string a_title;
	string a_description;
	string a_scoreValue;

public:

	//Getters
	string getAchievementTitle()
	{
		return a_title;
	}

	string getAchievementDescription()
	{
		return a_description;
	}

	string getAchievementScoreValue()
	{
		return a_scoreValue;
	}

	//Setters
	void setAchievementTitle(string title)
	{
		a_title = title;
	}

	void setAchievementDescription(string description)
	{
		a_description = description;
	}

	void setAchievementScoreValue(string scoreValue)
	{
		a_scoreValue = scoreValue;
	}

	//function prototypes

};