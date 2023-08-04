#include <SFML/Graphics.hpp>
#include<iostream>
#include<vector>
#include"ReadAndWrite.h"
#include"Engine.h"


int main()
{
	sf::RenderWindow w(sf::VideoMode(1280,720),"Game");
	Engine game;
	game.Start(w);
}
