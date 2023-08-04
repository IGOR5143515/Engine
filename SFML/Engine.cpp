#include "Engine.h"


void Engine::Start(sf::RenderWindow& w) {
	while (w.isOpen()) {
		sf::Event event;
		while (w.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				w.close();

		}

		w.clear();
		d.drawFunk(arr, w);
		w.display();
	}


}
 Engine::Engine(){
	w.setSize(sf::Vector2u(1280, 720));
}
