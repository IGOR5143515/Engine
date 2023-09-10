#include <SFML/Graphics.hpp>
#include"Engine.h"



int main()
{
	sf::RenderWindow w(sf::VideoMode(1280,720),"Game");
	sf::Vector2f resolution;

	resolution.x = sf::VideoMode::getDesktopMode().width;
	resolution.y = sf::VideoMode::getDesktopMode().height;

	w.create(sf::VideoMode(resolution.x, resolution.y),
		"Game Engine",
		sf::Style::Fullscreen);
	Engine t;

	t.start(w);
	return 0;

}
