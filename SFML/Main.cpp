#include <SFML/Graphics.hpp>
#include<iostream>
#include<vector>
#include"ReadAndWrite.h"

using namespace sf;


int main()
{
	
	RenderWindow w(sf::VideoMode(1280,720), "Game");
    bool isMove = false;
	Texture texture;
	texture.loadFromFile("C:/Users/IGOR/source/repos/Engine/resorses/img2.png.png");
	Sprite sprite;
	
	sprite.setTexture(texture);
	sprite.setScale(0.25,0.25);
	ReadAndWrite x("a","b");
   // x.read(sprite);
	
//x.write(sprite);
	
		
	while (w.isOpen()) {
       
        Vector2i pixelPos = Mouse::getPosition(w);
        Vector2f pos = w.mapPixelToCoords(pixelPos);
        sf::Event event;
        while (w.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                w.close();

            if (event.type == Event::MouseButtonPressed)
                if (event.key.code == Mouse::Left)
                    if (sprite.getGlobalBounds().contains(pos.x, pos.y)) {


                        isMove = true;
                    }

            if (event.type == Event::MouseButtonReleased)
                if (event.key.code == Mouse::Left) {
                    std::cout << sprite.getPosition().x << " " <<
                        sprite.getPosition().y << std::endl;
                    
                    x.write(sprite);
                    isMove = false;

                }


            if (isMove == true) {
                sprite.setPosition(Vector2f(pos.x, pos.y));
            }


        }


		    
		
		



		w.clear();
		w.draw(sprite);
		w.display();
	}


}
