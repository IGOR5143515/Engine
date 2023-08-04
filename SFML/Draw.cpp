#include "Draw.h"


void Draw::drawFunk(std::vector<spriteManager> arr, sf::RenderWindow& w) {

	for (size_t i = 0; i < arr.size(); i++)
	{

		w.draw(arr[0].getSprite());

	}


}