#include<iostream>

using namespace std;

#include"Field.h"
#include"Player.h"

int main()
{
	Field objField;
	
	Player objPlayer;
	objPlayer.put_ship();

	bool end=false;

	objField.end(end);

	while (end==false)
	{
		objPlayer.move(1);
		objPlayer.move(2);
		objField.end(end);
	};
	cout<<"End of game";
	system("pause");
}
