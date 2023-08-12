#pragma once
#include<iostream>
#include"Engine.h"
void Engine::addSprite(string link, string x, string y) {

	Sprite* a = new Sprite(link);

	arr.push_back(a);

}

void Engine::start(sf::RenderWindow &w) {
	sf::Event event {};
	while (w.isOpen()) {
		
		
		float x = hero.sprite.getPosition().x;
		float y = hero.sprite.getPosition().y;
		if (hero.isMove) {
			
			hero.distance = sqrt((hero.tempX - hero.sprite.getPosition().x) * (hero.tempX - hero.sprite.getPosition().x) + (hero.tempY - hero.sprite.getPosition().y) * (hero.tempY - hero.sprite.getPosition().y));
			
			
			if (hero.distance > 2) {
				
				
				x += 1 * (hero.tempX - hero.sprite.getPosition().x) / hero.distance;
				y += 1 * (hero.tempY - hero.sprite.getPosition().y) / hero.distance;
				hero.sprite.setPosition(x, y);
				std::cout << hero.distance;
			}
			else 
				hero.isMove = false;
			
			
		}
		
		
	

		baseScene.ifcoll(hero, baseScene);
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

	w.draw(baseScene.getSpriteBack());
	w.draw(baseScene.trigger1);
	w.draw(baseScene.trigger2);
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
		if(event.type==sf::Event::MouseButtonPressed)
			if (event.key.code == sf::Mouse::Left) {
				hero.isMove = true;
				hero.tempX = pos.x;
				hero.tempY = pos.y;
				
				

			}
		
		
	}


}

Engine::Engine() :baseScene("resorses/back1.jpg", sf::Vector2f(0,400), sf::Vector2f(1110,500))

{
	

}

