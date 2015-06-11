#include <iostream>

using namespace std;

#include"Player.h"
#include"Field.h"

Field objField;

void Player::put_ship()
{
	int x,y,l,k=0;

//PLAYER1

	cout<<"Player1"<<endl;

	objField.show_field_for_player(1);
	system("pause");
	system("cls");

//4 ПАЛУБНЫЙ

	objField.show_field_for_player(1);
	int can;

	cout<<"1-4"<<endl;

	do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,3,1);
			if (can>=3)
				cout<<"Can't put! Try again!"<<endl;
		}
	while (((x+3>10)&&(y+3>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}

	cout<<l<<endl;

	if (l==1)
		{
			for (int i=y-1; i<y+3; i++)
				{
						objField.put_1(x-1,i,4);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		};
		
	if (l==2)
		{
			for (int i=x-1; i<x+3; i++)
				{
						objField.put_1(i,y-1,4);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		};

//3 ПАЛУБНЫЙ

for (int i=0; i<2; i++)
		{
			objField.show_field_for_player(1);
			cout<<2-i<<"-3"<<endl;
			do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,3,1);
			if (can>=3)
				cout<<"Can't put! Try again!"<<endl;
		}
	while (((x+2>10)&&(y+2>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}

	can=0;

	
	cout<<l<<endl;


	if (l==1)
		{
			for (int i=y-1; i<y+2; i++)
				{
						objField.put_1(x-1,i,3);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		};
		
		if (l==2)
		{
			for (int i=x-1; i<x+2; i++)
				{
						objField.put_1(i,y-1,3);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		}
		}

//2 ПАЛУБНЫЙ

for (int i=0; i<3; i++)
		{
			objField.show_field_for_player(1);
			cout<<3-i<<"-2"<<endl;
			do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,2,1);
			if (can>=3)
				cout<<"Can't put! Try again!"<<endl;
		}
	while (((x+1>10)&&(y+1>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}
	
	cout<<l<<endl;


	if (l==1)
		{
			for (int i=y-1; i<y+1; i++)
				{
						objField.put_1(x-1,i,2);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		};
		
		if (l==2)
		{
			for (int i=x-1; i<x+1; i++)
				{
						objField.put_1(i,y-1,2);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		}
		}

//1 ПАЛУБНЫЙ

for (int i=0; i<4; i++)
		{
			objField.show_field_for_player(1);
			cout<<4-i<<"-1"<<endl;
			do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,1,1);
		if (can>=3)
			cout<<"Can't put! Try again!"<<endl;
		}
	while (((x>10)&&(y>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}


	cout<<l<<endl;

	if (l==1)
		{
			for (int i=y-1; i<y; i++)
				{
						objField.put_1(x-1,i,1);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		};
		
		if (l==2)
		{
			for (int i=x-1; i<x; i++)
				{
						objField.put_1(i,y-1,1);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		}
		}



//PLAYER2


cout<<"Player2"<<endl;
system("pause");

	objField.show_field_for_player(2);
	system("pause");
	system("cls");

//4 ПАЛУБНЫЙ

	objField.show_field_for_player(2);
	int can;

	cout<<"1-4"<<endl;

	do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,3,2);
			if (can>=3)
				cout<<"Can't put! Try again!"<<endl;
		}
	while (((x+3>10)&&(y+3>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}

	cout<<l<<endl;

	if (l==1)
		{
			for (int i=y-1; i<y+3; i++)
				{
						objField.put_2(x-1,i,4);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		};
		
	if (l==2)
		{
			for (int i=x-1; i<x+3; i++)
				{
						objField.put_2(i,y-1,4);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		};

//3 ПАЛУБНЫЙ

for (int i=0; i<2; i++)
		{
			objField.show_field_for_player(2);
			cout<<2-i<<"-3"<<endl;
			do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,3,2);
			if (can>=3)
				cout<<"Can't put! Try again!"<<endl;
		}
	while (((x+2>10)&&(y+2>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}

	can=0;

	
	cout<<l<<endl;


	if (l==1)
		{
			for (int i=y-1; i<y+2; i++)
				{
						objField.put_2(x-1,i,3);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		};
		
		if (l==2)
		{
			for (int i=x-1; i<x+2; i++)
				{
						objField.put_2(i,y-1,3);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		}
		}

//2 ПАЛУБНЫЙ

for (int i=0; i<3; i++)
		{
			objField.show_field_for_player(2);
			cout<<3-i<<"-2"<<endl;
			do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,2,2);
			if (can>=3)
				cout<<"Can't put! Try again!"<<endl;
		}
	while (((x+1>10)&&(y+1>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}
	
	cout<<l<<endl;


	if (l==1)
		{
			for (int i=y-1; i<y+1; i++)
				{
						objField.put_2(x-1,i,2);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		};
		
		if (l==2)
		{
			for (int i=x-1; i<x+1; i++)
				{
						objField.put_2(i,y-1,2);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		}
		}

//1 ПАЛУБНЫЙ

for (int i=0; i<4; i++)
		{
			objField.show_field_for_player(2);
			cout<<4-i<<"-1"<<endl;
			do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
			can=0;
			can=objField.able(can,x,y,1,2);
		if (can>=3)
			cout<<"Can't put! Try again!"<<endl;
		}
	while (((x>10)&&(y>10))||(can>=3));

	if (can==1)
		l=2;
	if (can==2)
		l=1;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}


	cout<<l<<endl;

	if (l==1)
		{
			for (int i=y-1; i<y; i++)
				{
						objField.put_2(x-1,i,1);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		};
		
		if (l==2)
		{
			for (int i=x-1; i<x; i++)
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
	if (p==1)
	{
		cout<<"Player 1"<<endl;
		system("pause");
		objField.show_field_for_player(1);
		cout<<endl;
		objField.show_field_for_player_copy(1);
		do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
		}
		while ((x>10)&&(y>10));
		objField.put_2(x-1,y-1,0);
		objField.put_1_copy(x-1,y-1,1);
		system("cls");

		objField.show_field_for_player(1);
		objField.show_field_for_player_copy(1);
		system("pause");
		system("cls");
	}

	if (p==2)
	{
		cout<<"Player 2"<<endl;
		system("pause");
		objField.show_field_for_player(2);
		cout<<endl;
		objField.show_field_for_player_copy(2);
		do
		{
			cout<<"Enter coordinates (x y): ";
			cin>>x>>y;
		}
		while ((x>10)&&(y>10));
		objField.put_2(x-1,y-1,0);
		objField.put_2_copy(x-1,y-1,1);
		system("cls");

		objField.show_field_for_player(2);
		objField.show_field_for_player_copy(2);
		system("pause");
		system("cls");
	}
}


