#pragma once

#include"ReadAndWrite.h"
class spriteManager
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
	ReadAndWrite pos;
public:
	spriteManager(string,string ,string);

	sf::Sprite& getSprite();
	void WritePosSprite();
	void readPosSprite();

};

