 #pragma once
#include <SFML/Graphics.hpp>
#include"Hero.h"

class Dialogs
{
private:

	sf::Font font;
	sf::Text text;
	int dialogSwitcher{};
	
public:

	std::vector<std::string>dialog{ "1" };
	friend class Engine;
	Dialogs();
	sf::Text getText(std::vector<std::string>,int);
	void Position(sf::Vector2f);

};

