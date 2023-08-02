#pragma once
#include <SFML/Graphics.hpp>
#include<fstream>
#include<iostream>
using namespace std;



class ReadAndWrite {
private:
	string nameOfFileX;
	string nameOfFileY;
	string StringPositionX = "0";// ! 
	string stringPositionY = "0";// !
	

	ifstream readFile;
	ofstream writeX;
	ofstream writeY;
	int Xvalue = 0;
	int Yvalue=0;
public:
	
	ReadAndWrite(string, string);

	

	void read(sf::Sprite &); //for write coordinate to file
	void write(sf::Sprite);  // for read coordinate from file

	

};

