#include <iostream>
#include <cctype>
#include <cstdlib>

using namespace std;

#include"Player.h"
#include"Field.h"

Field objField;

void Player::put_ship()
{
	int x=0,y=0,l,k=0,n;
	int can=0;
	char str_x[]="x";
	char str_y[]="y";

//PLAYER1
	
	cout<<"Player1"<<endl;

	objField.show_field_for_player(1);
	system("pause");
	system("cls");

//4 ПАЛУБНЫЙ

	objField.show_field_for_player(1);
	

	cout<<"1-4"<<endl;

	do
		{
			
			do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
			can=0;
			can=objField.able(can,x-1,y-1,4,1);
			if ((x<1)||(x>10)||(y>10)||(y<1)||(can>=3))
				cout<<"Can't put! Try again!"<<endl;
		}
	while ((x<1)||(x>10)||(y>10)||(y<1)||(can>=3));

	if (can==1)
		l=1;
	if (can==2)
		l=2;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}

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
			do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
			can=0;
			can=objField.able(can,x-1,y-1,3,1);
			if ((((x<1)||(x>10))||((y>10)||(y<1)))||(can>=3))
				cout<<"Can't put! Try again!"<<endl;
		}
	while ((((x<1)||(x+2>10))||((y+2>10)||(y<1)))||(can>=3));

	if (can==1)
		l=1;
	if (can==2)
		l=2;

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
			do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
			can=0;
			can=objField.able(can,x-1,y-1,2,1);
			if ((((x<1)||(x>10))||((y>10)||(y<1)))||(can>=3))
				cout<<"Can't put! Try again!"<<endl;
		}
	while ((((x<1)||(x+1>10))||((y+1>10)||(y<1)))||(can>=3));

	if (can==1)
		l=1;
	if (can==2)
		l=2;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}

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
				do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
				can=0;
				can=objField.able(can,x-1,y-1,1,1);
				if ((((x<1)||(x>10))||((y>10)||(y<1)))||(can>=3))
					cout<<"Can't put! Try again!"<<endl;
				}
			while ((((x<1)||(x>10))||((y>10)||(y<1)))||(can>=3));

			for (int i=y-1; i<y; i++)
				{
					objField.put_1(x-1,i,1);
				};
			objField.show_field_for_player(1);
			system("pause");
			system("cls");
		
		}



//PLAYER2


cout<<"Player2"<<endl;
system("pause");

	objField.show_field_for_player(2);
	system("pause");
	system("cls");

//4 ПАЛУБНЫЙ

	objField.show_field_for_player(2);

	cout<<"1-4"<<endl;

	do
		{
			do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
			can=0;
			can=objField.able(can,x-1,y-1,4,2);
			if ((((x<1)||(x+3>10))||((y+3>10)||(y<1)))||(can>=3))
				cout<<"Can't put! Try again!"<<endl;
		}
	while ((((x<1)||(x+3>10))||((y+3>10)||(y<1)))||(can>=3));

	if (can==1)
		l=1;
	if (can==2)
		l=2;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}

	if (l==1)
		{
			for (int i=y-1; i<y+3; i++)
				{
						objField.put_2(x-1,i,4);
				};
			objField.show_field_for_player(2);
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
			do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
			can=0;
			can=objField.able(can,x-1,y-1,3,2);
			if ((((x<1)||(x+2>10))||((y+2>10)||(y<1)))||(can>=3))
				cout<<"Can't put! Try again!"<<endl;
		}
	while ((((x<1)||(x+2>10))||((y+2>10)||(y<1)))||(can>=3));

	if (can==1)
		l=1;
	if (can==2)
		l=2;

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
			do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
			can=0;
			can=objField.able(can,x-1,y-1,2,2);
			if ((((x<1)||(x+1>10))||((y+1>10)||(y<1)))||(can>=3))
				cout<<"Can't put! Try again!"<<endl;
		}
	while ((((x<1)||(x+1>10))||((y+1>10)||(y<1)))||(can>=3));

	if (can==1)
		l=1;
	if (can==2)
		l=2;

	if (can==0)
	{
	do
		{
			cout<<"Enter locaton (1-horizontal, 2-vertical): ";
			cin>>l;
		}
	while ((l!=1)&&(l!=2));
	}


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
				do
			{
				cout<<"Enter coordinates (x y)"<<endl;
				cout<<"x: ";
				cin>>str_x;
				cout<<"y: ";
				cin>>str_y;

				if (!cin.fail())
				{
					x=atoi(str_x);
					y=atoi(str_y);
					n=1;
				}
			}
			while (n==0);
			
			n=0;
				can=0;
				can=objField.able(can,x-1,y-1,1,2);
				if ((((x<1)||(x>10))||((y>10)||(y<1)))||(can>=3))
					cout<<"Can't put! Try again!"<<endl;
			}
			while ((((x<1)||(x>10))&&((y>10)||(y<1)))||(can>=3));

			for (int i=y-1; i<y; i++)
				{
						objField.put_2(x-1,i,1);
				};
			objField.show_field_for_player(2);
			system("pause");
			system("cls");
		}

}

bool Player::move(int p, bool end)
{
	int x,y,can;
	bool kill=false;
	if (p==1)
	{
		do
		{

		//PLAYER1
		cout<<"Player 1"<<endl;
		system("pause");
		objField.show_field_for_player(1);
		cout<<endl;
		objField.show_field_for_player_copy(1);
		do
			{
				cout<<"Enter coordinates (x y): ";
				cin>>x>>y;
				can=0;
				can=objField.able_hit(can,x,y,1);
				if ((((x<1)||(x>10))&&((y>10)||(y<1)))||(can==0))
					cout<<"Can't hit! Try again!"<<endl;
			}
		while ((((x<1)||(x>10))&&((y>10)||(y<1)))||(can==0));
		system("cls");

		objField.show_field_for_player(1);
		objField.show_field_for_player_copy(1);
		kill=objField.kill(kill,x,y,1);
		if (kill==true)
		{
			cout<<"HIT! Move again!"<<endl;
			objField.put_2(x-1,y-1,5);
			objField.put_1_copy(x-1,y-1,5);
		}
		else
		{
			objField.put_2(x-1,y-1,6);
			objField.put_1_copy(x-1,y-1,6);
		}
		objField.show_field_for_player(1);
		objField.show_field_for_player_copy(1);
		system("pause");
		system("cls");		
		}
		while (kill==true);
		end=objField.end_of_game(end);
	}

	kill=false;

	if (p==2)
	{
		do
		{

		//PLAYER2
		cout<<"Player 2"<<endl;
		system("pause");
		objField.show_field_for_player(2);
		cout<<endl;
		objField.show_field_for_player_copy(2);
		do
			{
				cout<<"Enter coordinates (x y): ";
				cin>>x>>y;
				can=0;
				can=objField.able_hit(can,x,y,2);
				if ((((x<1)||(x>10))&&((y>10)||(y<1)))||(can==0))
					cout<<"Can't hit! Try again!"<<endl;
			}
		while ((((x<1)||(x>10))&&((y>10)||(y<1)))||(can==0));
		system("cls");

		objField.show_field_for_player(2);
		objField.show_field_for_player_copy(2);
		kill=objField.kill(kill,x,y,2);
		if (kill==true)
		{
			cout<<"HIT! Move again!"<<endl;
			objField.put_1(x-1,y-1,5);
			objField.put_2_copy(x-1,y-1,5);
		}
		else
		{
			objField.put_1(x-1,y-1,6);
			objField.put_2_copy(x-1,y-1,6);
		}
		objField.show_field_for_player(2);
		objField.show_field_for_player_copy(2);
		system("pause");
		system("cls");		
		}
		while (kill==true);
		end=objField.end_of_game(end);
	}

	return end;
}
