#pragma once
#include <SFML/Graphics.hpp>
#include<string>
#include<fstream>

using namespace std;

class Sprite{

protected:

	sf::Texture texture;
	
private:

public:

	sf::Sprite sprite;

	friend class Scenes;
	friend class Inventory;
	friend class Persons;

	std::string iden;
	Sprite() {}
	Sprite(string);
	sf::Sprite getSprite();
	void setSprite(string link);

	std::string getIden() {

		return iden;

	}
	
};

