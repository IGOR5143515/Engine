#pragma once
#include <SFML/Graphics.hpp>
#include<fstream>
#include<iostream>
using namespace std;



class ReadAndWrite {
private:
	string nameOfFileX;
	string nameOfFileY;


	string StringPositionX;
	string stringPositionY;
	ifstream readFile;
	ofstream writeX;
	ofstream writeY;
	int Xvalue;
	int Yvalue;
public:
	ReadAndWrite();

	void read();
	void write(sf::Sprite,string,string);



};

