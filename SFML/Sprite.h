#pragma once
#include <SFML/Graphics.hpp>
#include<string>
#include<fstream>
using namespace std;

class Sprite
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
	std::string nameOfFileX;
	std::string nameOfFileY;
	string posX;
	string posY;

	std::ifstream readFile;
	ofstream writeX;
	ofstream writeY;

	int Xvalue;
	int Yvalue;
	
public:
	Sprite() {}
	Sprite(string,string,string);
	sf::Sprite getSprite();
	void read(sf::Sprite&);
	void write(sf::Sprite);

};

