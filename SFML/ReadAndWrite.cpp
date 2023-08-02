#include "ReadAndWrite.h"

ReadAndWrite::ReadAndWrite(string sX, string sY):
	writeX(sX),writeY(sY){
	nameOfFileX = sX;
	nameOfFileY = sY;

}

void ReadAndWrite::write(sf::Sprite s) {
	
	writeX.open(nameOfFileX);
	writeY.open(nameOfFileY);

	writeX << s.getPosition().x;
	writeY << s.getPosition().y;

	writeX.close();
	writeY.close();



}

void ReadAndWrite::read(sf::Sprite& s) {
	
	readFile.open(nameOfFileX);
	if (readFile)
		readFile >> StringPositionX;

	readFile.close();

	readFile.open(nameOfFileY);

	if (readFile)
		readFile >> stringPositionY;

	readFile.close();

	Xvalue = std::stoi(StringPositionX);
	Yvalue = std::stoi(stringPositionY);

	s.setPosition(Xvalue, Yvalue);
}


