#include <SFML/Graphics.hpp>
#include<iostream>
#include<vector>
#include"ReadAndWrite.h"

using namespace sf;

class test {
private:
	Texture texture;
	Sprite sprite;
public:
	test(std::string link) {
		texture.loadFromFile(link);
		sprite.setTexture(texture);
		sprite.setPosition(1, 1);
	}

	Sprite getSprite() { return sprite; }


};
void foo(std::vector<test> arr,RenderWindow &w) {
	for (size_t i = 0; i < arr.size(); i++)
	{
		w.draw(arr[i].getSprite());
		
	}
}
int main()
{
	
	RenderWindow w(sf::VideoMode(1280,720), "Game");
	test q("C:/Users/User/source/repos/SFML/resorses/img3.jpg");
	test two("C:/Users/User/source/repos/SFML/resorses/img2.png.png");
	
	std::vector<test>arr{ two,q };


	ReadAndWrite x("1.txt","2.txt");
	
    
	
	while (w.isOpen()) {
		
        
		w.clear();
		foo(arr,w);
		w.display();























        sf::Event event;
        while (w.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                w.close();
        }
	}
}
