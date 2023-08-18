#include "Inventory.h"


void Inventory::addItem(Sprite s) {

	arrInv.push_back(&s);
	
}

void Inventory::position() {
	int step=0;
	for (size_t i = 0; i < arrInv.size(); i++)
	{
		(*arrInv[i]).sprite.setPosition(500, 100 + (step+100));
	}

}

void Inventory::dellItem() {

	std::string nameToRemove = "Beer";
	arrInv.erase(std::remove_if(arrInv.begin(), arrInv.end(),
		[&nameToRemove]( Sprite* personPtr) {
			if (personPtr->getIden() == nameToRemove) {
				delete personPtr; // Освобождение памяти
				return true;
			}													
			return false;
		}), arrInv.end());

	for (Sprite* personPtr : arrInv) {
		delete personPtr;
	}


}