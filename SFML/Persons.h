#pragma once
#include"Character.h"
#include"Scenes.h"
class Persons
{

public:
	Persons();
	Character ch;
	
	std::vector<std::string>popDialogs{"wawdawd", "awdawdawd"};
	Dialogs dialogs;
	sf::Text printDialogs();
	
	
};

