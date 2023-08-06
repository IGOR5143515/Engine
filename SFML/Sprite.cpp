#include "Sprite.h"
#include<iostream>
#include<string>
sf::Sprite Sprite::getSprite() { return sprite; }


void Sprite::read(sf::Sprite &s){
	readFile.open(nameOfFileX);
	if (readFile.is_open()) {


		while (std::getline(readFile, posX)) {

			cout << posX << endl;

		}


		readFile.close();

	}
	else {
		cout << "NOO" << endl;
	}

	readFile.open(nameOfFileY);

	if (readFile.is_open()) {


		while (std::getline(readFile, posY)) {

			cout << "    " << posY << endl;
		}


		readFile.close();

	}
	else {
		cout << "NOO" << endl;
	}
	Xvalue = std::stoi(posX);
	Yvalue = std::stoi(posY);

	s.setPosition(Xvalue, Yvalue);


}
void Sprite::write (sf::Sprite s) {
	writeX.open(nameOfFileX);
	writeY.open(nameOfFileY);

	writeX << s.getPosition().x;
	writeY << s.getPosition().y;

	writeX.close();
	writeY.close();


}

Sprite::Sprite(string link,string x, string y ) {
	nameOfFileX=x;
	nameOfFileY=y;
	texture.loadFromFile(link);
	sprite.setTexture(texture);

}