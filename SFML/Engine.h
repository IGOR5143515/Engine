#pragma once
#include"Draw.h"
#include"ReadAndWrite.h"
class Engine
{
private:
	std::vector<spriteManager> arr;
	Draw d;
	sf::RenderWindow w;
public:
	Engine();

	void Start(sf::RenderWindow &);
};

