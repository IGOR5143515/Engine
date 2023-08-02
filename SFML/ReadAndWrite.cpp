#include "ReadAndWrite.h"

ReadAndWrite::ReadAndWrite() {

}

void ReadAndWrite::write(sf::Sprite sp,string sX,string sY) {
	nameOfFileX = sX;
	nameOfFileY = sY;
	writeX.open(sX);
	writeY.open(sY);

	writeX << sp.getPosition().x;
	writeY << sp.getPosition().y;

	writeX.close();
	writeY.close();



}

void ReadAndWrite::read() {
	
	readFile.open(nameOfFileX);
	if (readFile)
		readFile >> StringPositionX;

	readFile.close();

	readFile.open(nameOfFileY);

	if (readFile)
		readFile >> stringPositionY;

	readFile.close();
}


void ReadAndWrite::getX() {
	Xvalue = std::stoi(StringPositionX);
	
}

void ReadAndWrite::getY() {
	Xvalue = std::stoi(stringPositionY);
	
}
void ReadAndWrite::startPosition(sf::Sprite& sp) {

	

}