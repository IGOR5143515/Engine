#pragma once
#include"Sprite.h"



class test
{
private:
	std::vector<Sprite*>arr;
	bool isMove = false;
public:
	test(){}

	void addSprite(string, string, string);

	void start(sf::RenderWindow& w);

	void foo( sf::RenderWindow& w) {
		for (size_t i = 0; i < arr.size(); i++)
		{
			w.draw(arr[i]->getSprite());
		}
	}

};

