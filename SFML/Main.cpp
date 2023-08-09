#include <SFML/Graphics.hpp>
#include"Engine.h"



int main()
{
	sf::RenderWindow w(sf::VideoMode(1280,720),"Game");
	
	Engine t;
t.addSprite("resorses/img2.png.png",
		"1.txt", "2.txt");
t.addSprite("resorses/img1.png.png",
	"4.txt", "3.txt");
	
	t.start(w);
	return 0;
}
