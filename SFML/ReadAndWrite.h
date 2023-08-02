#pragma once
#include <SFML/Graphics.hpp>
#include<fstream>
#include<iostream>
using namespace std;



class ReadAndWrite {
private:
	string nameOfFileX;
	string nameOfFileY;

	

	string StringPositionX{};
	string stringPositionY{};
	ifstream readFile;
	ofstream writeX;
	ofstream writeY;
	
	int Yvalue=0;
public:
	int Xvalue=0;
	ReadAndWrite();

	int getX();
	int getY();

	void read();
	void write(sf::Sprite,string,string);

	void startPosition(sf::Sprite &);

};

