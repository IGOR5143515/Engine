#pragma once
#include"test.h"
#include"drawFunk.h"
void test::addSprite(string link, string x, string y) {

	Sprite* a = new Sprite(link, x, y);

	arr.push_back(a);

}

void test::start(sf::RenderWindow &w) {

	while (w.isOpen()) {
	

		w.clear();
		foo(w);
		w.display();

	}


}