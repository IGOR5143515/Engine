#include "Persons.h"
#include<iostream>

Persons::Persons():ch("resorses/Gop.png") {
	
}

sf::Text Persons::printDialogs() {

	sf::Text text;
	text=dialogs.getText(popDialogs, 0);
	return text;
	
}



