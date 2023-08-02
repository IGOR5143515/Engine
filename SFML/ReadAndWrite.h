#pragma once
#include <SFML/Graphics.hpp>
#include<fstream>
#include<iostream>
using namespace std;

//переделать конструктор, write работает не корректно.

class ReadAndWrite {
private:
	string nameOfFileX;
	string nameOfFileY;
	string StringPositionX = "0";
	string stringPositionY = "0";
	int Xvalue = 0;

	

	
	ifstream readFile;
	ofstream writeX;
	ofstream writeY;
	
	int Yvalue=0;
public:
	
	ReadAndWrite();

	void getX();
	void getY();

	void read();
	void write(sf::Sprite,string,string);

	void startPosition(sf::Sprite &);

};

