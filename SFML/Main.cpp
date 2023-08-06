#include <SFML/Graphics.hpp>



#include"test.h"



int main()
{
	sf::RenderWindow w(sf::VideoMode(1280,720),"Game");
	
	test t;
t.addSprite("C:/Users/IGOR/source/repos/Engine/resorses/img2.png.png",
		"1.txt", "2.txt");
t.addSprite("C:/Users/IGOR/source/repos/Engine/resorses/img1.png.png",
	"4.txt", "3.txt");
	
	t.start(w);
	
}
