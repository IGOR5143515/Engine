#include "Dialogs.h"

Dialogs::Dialogs() {
	font.loadFromFile("fonts/CyrilicOld.ttf");
	text.setFont(font);
	text.setScale(1, 1);
	text.setFillColor(sf::Color::Transparent);
	
}

sf::Text Dialogs::getText(std::vector<std::string> arr, int type) {
	text.setFillColor(sf::Color::Green);
	text.setString(arr[type]);
	return text;
	
}

void Dialogs::Position(sf::Vector2f pos) { 
	text.setPosition(0, 900); }