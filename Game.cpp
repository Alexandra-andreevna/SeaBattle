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

	bool end=false;

	do
	{
		end=objPlayer.move(1, end);
		if (end==false)
		{
			end=objPlayer.move(2,end);
		};
	}
	while (end==false);
	cout<<"THE END"<<endl;
	system("pause");
}
