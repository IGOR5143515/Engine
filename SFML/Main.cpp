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

	x.write(sprite,"file1", "file2");
	ReadAndWrite y;

	x.write(sprite, "file3", "file4");
	while (w.isOpen()) {
		w.clear();
		w.draw(sprite);
		w.display();
	}


}
