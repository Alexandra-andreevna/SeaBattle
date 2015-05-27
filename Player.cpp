#include <iostream>

using namespace std;

#include"Player.h"
#include"Field.h"

Field objField;

void Player::put_ship()
{
	int x,y,l,number,deck,k=0;

	cout<<"Player1"<<endl;

	objField.show_field_for_player(1);
	system("pause");
	system("cls");

	do 
	{
		cout<<"Enter number of ships: ";
		cin>>number;
	}
	while (number>25);

	for (int i=1; i<number+1; i++)
	{
		objField.show_field_for_player(1);
		do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
		}
		while ((x>10)&&(y>10));

		do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}

		while ((l!=1)&&(l!=2));

		if (l==1)
		{
			do 
			{
				cout<<"Enter amount of deck: ";
				cin>>deck;
				for (int i=y-1; i<y+deck-1; i++)
				{
						k=k+field_1[x-1][i];
				};
			}
			while ((deck>10)||((x+deck-1)>10)||(k>=1));

			for (int i=y-1; i<y+deck-1; i++)
				{
						objField.put_1(x-1,i,1);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		};

		k=0;
		
		if (l==2)
		{
			do 
			{
				cout<<"Enter amount of deck: ";
				cin>>deck;
				for (int i=x-1; i<x+deck-1; i++)
				{
						k=k+field_1[i][y-1];
				};
			}
			while ((deck>10)||((y+deck-1)>10)||(k>=1));

			for (int i=x-1; i<x+deck-1; i++)
				{
						objField.put_1(i,y-1,1);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		}
	}

	cout<<"Player2"<<endl;

	objField.show_field_for_player(2);
	system("pause");
	system("cls");

	do 
	{
		cout<<"Enter number of ships: ";
		cin>>number;
	}
	while (number>25);

	for (int i=1; i<number+1; i++)
	{
		objField.show_field_for_player(2);
		do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
		}
		while ((x>10)&&(y>10));

		do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}

		while ((l!=1)&&(l!=2));

		k=0;

		if (l==1)
		{
			do 
			{
				cout<<"Enter amount of deck: ";
				cin>>deck;
				for (int i=y-1; i<y+deck-1; i++)
				{
						k=k+field_2[x-1][i];
				};
			}
			while ((deck>10)||((x+deck-1)>10)||(k!=0));
				for (int i=y-1; i<y+deck-1; i++)
				{
						objField.put_2(x-1,i,1);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		}
		
		k=0;

		if (l==2)
		{
			do 
			{
				cout<<"Enter amount of deck: ";
				cin>>deck;
				for (int i=x-1; i<x+deck-1; i++)
				{
						k=k+field_2[i][y-1];
				};
			}
			while ((deck>10)||((y+deck-1)>10)||(k>0));
			for (int i=x-1; i<x+deck-1; i++)
				{
						objField.put_2(i,y-1,1);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		}
	}
}

void Player::move(int p)
{
	int x,y;

	do
	{
		cout<<"Player "<<p<<endl;
		cout<<"Enter coordinates: ";
		cin>>x>>y;
	}
	while ((x>10)&&(y>10));

	if (p==1)
	{
		if (field_2[x-1][y-1]==1)
		{
			cout<<field_2[x-1][y-1];
			objField.put_copy_2(x-1,y-1,1);
		}
		else
		{
			objField.put_2(x-1,y-1,0);
			objField.put_copy_2(x-1,y-1,8);
		}
		objField.show_field_for_player(p);
	}

	if (p==2)
		{
			if (field_1[x-1][y-1]==1)
			{
				objField.put_1(x-1,y-1,0);
				objField.put_copy_1(x-1,y-1,8);
			}
			else
			{
			objField.put_copy_1(x-1,y-1,1);
			}
			objField.show_field_for_player(p);
		}
			system("pause");
			system("cls");
}
