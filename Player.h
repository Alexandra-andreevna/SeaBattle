#ifndef __PLAYER_H
#define __PLAYER_H

class Player
{
public:
	Player()
	{};
	
	void put_ship();
	bool move(int p, bool end);
};
 
#endif

