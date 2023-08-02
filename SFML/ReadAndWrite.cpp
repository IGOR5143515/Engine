#include "ReadAndWrite.h"

ReadAndWrite::ReadAndWrite() {

}

void ReadAndWrite::write(sf::Sprite sp,string sX,string sY) {

	writeX.open(sX);
	writeY.open(sY);

	writeX << sp.getPosition().x;
	writeY << sp.getPosition().y;

	writeX.close();
	writeY.close();



}

