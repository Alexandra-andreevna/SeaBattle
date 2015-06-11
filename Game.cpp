#include<iostream>

using namespace std;

#include"Field.h"
#include"Player.h"

int main()
{
	Field objField;
	
	Player objPlayer;
	objPlayer.put_ship();

	cout<<"START GAME"<<endl;

	bool end;

	do
	{
		end=false;
		objPlayer.move(1);
		end=objField.end_of_game(end);
		if (end==false)
		{
			objPlayer.move(2);
			end=objField.end_of_game(end);
		};
	}
	while (end==false);
	cout<<"THE END"<<endl;
}
