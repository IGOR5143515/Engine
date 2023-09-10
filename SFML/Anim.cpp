#include "Anim.h"

void Anim::walkAnim(Hero& h) {

	if (h.isStandOnTrigget1) {
	
		for (size_t i = 0; i < 50; i++)
		{

			h.sprite.move(0, h.sprite.getPosition().y-i);

		}

	}


}