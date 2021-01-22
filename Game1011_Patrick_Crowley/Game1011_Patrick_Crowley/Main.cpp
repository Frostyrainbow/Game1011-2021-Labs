#include "Platform.h"



int main()
{
	//Variables
	bool exitFlag = false;
	string userInput;
	int p_arraySlot = 0;
	int g_arraySlot = 0;
	int a_arraySlot = 0;
	Platform* listOfPlatforms[3];

	cout << "Hello welcome to the Achievement Tracker.  This program will track achievements across any game and their respected platform." << endl;
	cout << "This tracker will hold 3 platforms. Each of the platforms can hold 3 games and each game can hold 5 achievments" << endl;
	cout << "Start by creating a new platform.  Enter the name of the platform ";
	while (!exitFlag)
	{
		Platform* newPlatform = new Platform;
		cin >> userInput;
		newPlatform->setPlatformName(userInput);
		cout << "Enter in the manufacture of the platform ";
		cin >> userInput;
		newPlatform->setPlatformManufacturer(userInput);
		listOfPlatforms[p_arraySlot] = newPlatform;
	
		for (int n = 0; n <= 2; n++)
		{
			Game* newGame = new Game;
			cout << "Enter in the name of a game on this platform ";
			cin >> userInput;
			newGame->setGameName(userInput);
			cout << "Enter in the name of the developer for this game ";
			cin >> userInput;
			newGame->setGameDevloper(userInput);
			cout << "Enter in the publisher of this game ";
			cin >> userInput;
			newGame->setGamePublisher(userInput);
			newPlatform->addGame(*newGame, g_arraySlot);

			cout << "Game was added to the list" << endl;

			for (int i = 0; i <= 4; i++)
			{
				Achievement* newAchievement = new Achievement;
				cout << "Add an achevemtn to this game ";
				cin >> userInput;
				newAchievement->setAchievementTitle(userInput);
				cout << "What is the discription of this achievement ";
				cin >> userInput;
				newAchievement->setAchievementDescription(userInput);
				cout << "What is the score of this achievement ";
				cin >> userInput;
				newAchievement->setAchievementScoreValue(userInput);
				newPlatform->listOfGames[g_arraySlot].addAchievement(*newAchievement, a_arraySlot);
				a_arraySlot++;
			}//end of inner for loop
			g_arraySlot++;
			if (g_arraySlot < 3)
			{
				cout << "Add another game\n" << endl;
			}
			a_arraySlot = 0;
		}//end of outer for loop
		p_arraySlot++;
		g_arraySlot = 0;
		if (p_arraySlot >= 3)
		{
			exitFlag = true;
		}
		else
		{
			cout << "Add another Platform\n" << endl;
		}
		

	}//end of while
	cout << "\n\nDisplaying results now" << endl;
	for (int m = 0; m <= 2; m++)
	{
		cout << "\n\nName of the platform is " << listOfPlatforms[m]->getPlatformName() << " And was manufactured by " << listOfPlatforms[m]->getPlatformManufacturer() << endl;
		for (int i = 0; i <= 2; i++)
		{
			cout << "\nThe name of a game on this platform is " << listOfPlatforms[m]->listOfGames[i].getGameName();
			cout << " It was developed by " << listOfPlatforms[m]->listOfGames[i].getGameDeveloper() << " and was published by " << listOfPlatforms[m]->listOfGames[i].getGamePublisher() << endl;
			for (int n = 0; n <= 4; n++)
			{
				cout << "\nAn achievement from this game is called " << listOfPlatforms[m]->listOfGames[i].listOfAchievements[n].getAchievementTitle();
				cout << " The discription of this achievement is " << listOfPlatforms[m]->listOfGames[i].listOfAchievements[n].getAchievementDescription() << " It has a score of " << listOfPlatforms[m]->listOfGames[i].listOfAchievements[n].getAchievementScoreValue() << endl;

			}
		}
	}
	cout << "Thank you for using the program";
}//end of main