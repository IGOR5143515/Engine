#pragma once
#include"test.h"
#include"drawFunk.h"
void test::addSprite(string link, string x, string y) {

	Sprite* a = new Sprite(link, x, y);

	arr.push_back(a);

}

void test::start(sf::RenderWindow &w) {

	while (w.isOpen()) {
		sf::Vector2i pixelPos = sf::Mouse::getPosition(w);
		sf::Vector2f pos = w.mapPixelToCoords(pixelPos);
		sf::Event event;
		while (w.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				w.close();
			
			if (event.type == sf::Event::MouseButtonPressed)
				if (event.key.code == sf::Mouse::Left)
					for (size_t i = 0; i < arr.size(); i++)
					{


							if (arr[i]->getSprite().getGlobalBounds().contains(pos.x, pos.y)) {


								isMove = true;
							}
					}

			if (event.type == sf::Event::MouseButtonReleased)
				if (event.key.code == sf::Mouse::Left) {
					for (size_t i = 0; i < arr.size(); i++)
					{
						arr[i]->write(arr[i]->getSprite());
					}
					
					isMove = false;

				}

			if (isMove == true) {
				for (size_t i = 0; i < arr.size(); i++)
				{


					arr[i]->getSprite().setPosition(pos.x, pos.y);
				}
			}

		}

		w.clear();
		foo(w);
		w.display();

	}


}