#include "ReadAndWrite.h"

ReadAndWrite::ReadAndWrite(string sX, string sY):readFile("opent.txt") {

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
	
	if (readFile.is_open()) {

		while (std::getline(readFile, posX)) {
			
			cout << posX << endl;
			
		}
		
		readFile.close();

	}

	else {

		cout << "NOO" << endl;

	}

	readFile.open(nameOfFileY);

	if (readFile.is_open()) {

		while (std::getline(readFile, posY)) {

			cout<<"    " << posY << endl;
		}

		readFile.close();

	}
	else {

		cout << "NOO" << endl;

	}
	Xvalue = std::stoi(posX);
	Yvalue = std::stoi(posY);
	
	s.setPosition(Xvalue, Yvalue);

}


