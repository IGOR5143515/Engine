#include "Persons.h"

Persons::Persons() :Pop("resorses/pop.jpg", sf::Vector2f(0,0)),
Gop("resorses/Gop.png", sf::Vector2f(0, 0)) {
	dialogs.Position(sf::Vector2f(500,500));
	
}

sf::Text Persons::printDialogs() {
	sf::Text text;
	text=dialogs.getText(popDialogs, 1);
	return text;
	
}

void Persons::personPosition(Scenes &s) {
//	if (s.selSc == ONE) {
	
	Pop.position(sf::Vector2f(300, 300));
	//}
//	else
	//	Pop.GetHero().setPosition(-10, -10);


}