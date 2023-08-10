#include "Scenes.h"

Scenes::Scenes(string link, sf::Vector2f tr1, sf::Vector2f tr2):background(link) {

	trigger1.setPosition(tr1);
	trigger2.setPosition(tr2);




}

void Scenes::setBackground(Sprite &s) {
	s.sprite = background.sprite;
}

Scenes::Scenes(string s):background(s) {



}


Scenes::Scenes() {}