#include "Inventory.h"
#include<algorithm>
#include<iostream>

void Inventory::addItem(std::string s,std::string type) {
	
	Items* i = new Items(s, type);
	i->sprite.setPosition(step, 500);
	
	arrInv.push_back(i);
	step += 400;
}

void Inventory::position() {
	int step = 0;
	for (size_t i = 0; i < arrInv.size(); i++)
	{
		
		arrInv[i]->sprite.setPosition(100+step, 500);
		step += 400;
	}
}

void Inventory::dellItem() {

	std::string nameToRemove = "Beer";
	arrInv.erase(std::remove_if(arrInv.begin(), arrInv.end(),
		[&nameToRemove](Sprite* sprite) {
			return sprite->iden == nameToRemove;
		}),
		arrInv.end());
	
	position();

	std::cout << arrInv.size();
	

}

void Inventory::moveSprite(sf:: Event &e,sf::RenderWindow &w, sf::Vector2f pos) {
	
	std::string indentification;
	Sprite* copy{};
	if (e.type == sf::Event::MouseButtonPressed)
		if (e.key.code == sf::Mouse::Left) {
			for (size_t i = 0; i < arrInv.size(); i++)
			{
				cout << "qwe" << endl;
				if (arrInv[i]->sprite.getGlobalBounds().contains(pos.x, pos.y) && arrInv[i]->iden == "Beer") {
					
					isMove = true;
					indentification = arrInv[i]->iden;
					copy = arrInv[i];
				}
			}
		}
	if (e.type == sf::Event::MouseButtonReleased)
		if (e.key.code == sf::Mouse::Left)
			isMove = false;


	if (isMove) {
		
		copy->sprite.setPosition(pos.x, pos.y);
	
	}

}

