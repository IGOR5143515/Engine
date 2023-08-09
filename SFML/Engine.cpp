#pragma once
#include"Engine.h"
void Engine::addSprite(string link, string x, string y) {

	Sprite* a = new Sprite(link, x, y);

	arr.push_back(a);

}

void Engine::start(sf::RenderWindow &w) {
	sf::Event event {};
	while (w.isOpen()) {

		input(event,w);
		draw(w);
	}


}
void Engine::draw(sf::RenderWindow &w) {
	w.clear();
	drawArray(w);
	w.display();

}

void Engine::drawArray(sf::RenderWindow& w) {
	for (size_t i = 0; i < arr.size(); i++)
	{
		w.draw(arr[i]->getSprite());
	}
}

void Engine::input(sf::Event event,sf::RenderWindow &w) {
	sf::Vector2i pixelPos = sf::Mouse::getPosition(w);
	sf::Vector2f pos = w.mapPixelToCoords(pixelPos);
	
	while (w.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			w.close();

		

	}

}