#pragma once
#include <SFML/Graphics.hpp>
#include<string>
#include<fstream>
using namespace std;

class Sprite
{
protected:

	sf::Texture texture;
	sf::Sprite sprite;
private:


public:
	friend class Scenes;
	friend class Inventory;

	Sprite() {}
	Sprite(string);
	sf::Sprite getSprite();
	void setSprite(string link);

};

