#pragma once
#include <SFML/Graphics.hpp>
#include<fstream>
#include<iostream>
using namespace std;



class ReadAndWrite {
private:
	string nameOfFileX;
	string nameOfFileY;
	std::string PosX;
	std::string PosY;
	string posX;
	string posY;

	ifstream readFile;
	ofstream writeX;
	ofstream writeY;
	int Xvalue = 0;
	int Yvalue=0;
public:
	ReadAndWrite() {};
	ReadAndWrite(string, string);

	


	void read(sf::Sprite &); //for write coordinate to file
	void write(sf::Sprite);  // for read coordinate from file

	

};

