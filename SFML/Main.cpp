#include <SFML/Graphics.hpp>
#include<iostream>
#include<vector>
#include"ReadAndWrite.h"

using namespace sf;


int main()
{
	RenderWindow w(sf::VideoMode(1280, 720), "Game");

	Texture texture;
	texture.loadFromFile("C:/Users/User/source/repos/SFML/resorses/img2.png.png");
	Sprite sprite;
	sprite.setPosition(200, 500);
	sprite.setTexture(texture);
	ReadAndWrite x;
	x.read();
	std::cout << x.getX();
	
	while (w.isOpen()) {

		x.write(sprite, "1", "2");

		w.clear();
		w.draw(sprite);
		w.display();
	}


}
