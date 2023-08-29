#include "Inventory.h"
#include<algorithm>
#include<iostream>

void Inventory::addItem(std::string s,std::string type) {
	
	Items* i = new Items(s, type);
	i->sprite.setPosition(step, 500);
	
	arrInv.push_back(i);
	step += 200;
}

void Inventory::position() {
	int step = 0;
	for (size_t i = 0; i < arrInv.size(); i++)
	{
		
		arrInv[i]->sprite.setPosition(100+step, 500);
		step += 200;
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

void Inventory::moveSprite(Hero& h, sf::RenderWindow &w, sf::Vector2f pos,sf::Event e) {
	
	int posx = h.sprite.getPosition().x;
	int posy = h.sprite.getPosition().y;
	
	if (e.type == sf::Event::MouseButtonPressed)
		if (e.key.code == sf::Mouse::Left) {
			for (size_t i = 0; i < arrInv.size(); i++)
			{
				
				
				if (arrInv[i]->sprite.getGlobalBounds().contains(pos.x, pos.y) && arrInv[i]->iden == "Beer") {								 //move inventory
					
					isMove = true;
					h.touch = true;
					copy = arrInv[i];
					
				}
				if (arrInv[i]->sprite.getGlobalBounds().contains(pos.x, pos.y) && arrInv[i]->iden == "Shield") {

					isMove = true;
					h.touch = true;
					copy = arrInv[i];
					
				}
			}
		}
	if (e.type == sf::Event::MouseButtonReleased)
		if (e.key.code == sf::Mouse::Left) {
			position();
			isMove = false;
			h.touch = false;
		}

	if (isMove) {
		
		copy->sprite.setPosition(pos.x, pos.y);
	
	}

}

