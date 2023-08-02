#pragma once
#include <SFML/Graphics.hpp>
#include<fstream>
#include<iostream>
using namespace std;



class ReadAndWrite {
private:
	ifstream read;
	ofstream write;
	int Xvalue;
	int Yvalue;
public:
	ReadAndWrite(string,sf::Sprite);

	void read();
	void write();



};

