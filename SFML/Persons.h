#pragma once
#include"Character.h"
#include"Scenes.h"
class Persons
{
private:
	Character Pop;
	Character Gop;
	
public:
	Persons( );
	void personPosition(Scenes&);
	std::vector<Character>arrPersons{Pop, Gop};
	std::vector<std::string>popDialogs{"wawdawd", "awdawdawd"};
	Dialogs dialogs;
	sf::Text printDialogs();
};

