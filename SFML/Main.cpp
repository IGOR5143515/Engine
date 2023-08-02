#include <SFML/Graphics.hpp>
#include<iostream>
#include<vector>
#include"ReadAndWrite.h"

using namespace sf;


int main()
{
	RenderWindow w(sf::VideoMode(400,400), "Game");

	Texture texture;
	texture.loadFromFile("C:/Users/IGOR/source/repos/Engine/resorses/img2.png.png");
	Sprite sprite;
	sprite.setPosition(0, 0);
	sprite.setTexture(texture);
	ReadAndWrite x;
	
	x.read();
	
		
	while (w.isOpen()) {

	





		w.clear();
		w.draw(sprite);
		w.display();
	}


}
