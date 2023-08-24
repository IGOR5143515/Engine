#pragma once
#include <SFML/Graphics.hpp>
#include"Hero.h"
class Dialogs
{
private:
	sf::Font font;
	sf::Text text;
	int dialogSwitcher{};
	std::vector<std::string>dialog;
public:
	friend class Engine;
	Dialogs(std::string str, sf::Vector2f vec);
	sf::Text getText();
	void Position(sf::Vector2f);
};

