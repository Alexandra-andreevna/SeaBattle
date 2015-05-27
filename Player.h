#ifndef __PLAYER_H
#define __PLAYER_H

#include"Field.h"

class Player: public Field

{
public:
	Player():Field()
	{};
	void put_ship();
	void move(int p);
};

#endif
