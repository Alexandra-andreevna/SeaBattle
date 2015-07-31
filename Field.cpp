#include <iostream>

using namespace std;

#include"Field.h"

Field::Field()
		{
		for (int i = 0; i<10; i++)
		for (int j = 0; j<10; j++)
			{
				field_1[i][j]=0;
				field_2[i][j]=0;
			}
		};

void Field::show_field_for_player(int p)
		{
			if (p==1)
			{
				for (int i = 0; i<10; i++)
				{
					for (int j = 0; j<10; j++)
						{
							if (field_1[i][j]==0)
								cout<<"~";
							if (field_1[i][j]==5)
								cout<<"*";
							if (field_1[i][j]==6)
								cout<<"@";
							if ((field_1[i][j]!=0)&&(field_1[i][j]!=5)&&(field_1[i][j]!=6))
								cout<<"#";
						}
					cout<<endl;
				};
			};
			cout<<endl;

			if (p==2)
			{
				for (int i = 0; i<10; i++)
				{
					for (int j = 0; j<10; j++)
						{
							if (field_2[i][j]==0)
								cout<<"~";
							if (field_2[i][j]==5)
								cout<<"*";
							if (field_2[i][j]==6)
								cout<<"@";
							if ((field_2[i][j]!=0)&&(field_2[i][j]!=5)&&(field_2[i][j]!=6))
								cout<<"#";
						}
					cout<<endl;
				};
				cout<<endl;
			};
		};

void Field::show_field_for_player_copy(int p)
		{
			if (p==1)
			{
				for (int i = 0; i<10; i++)
				{
					for (int j = 0; j<10; j++)
						{
							if (field_1_copy[i][j]==0)
								cout<<"~";
							if (field_1_copy[i][j]==5)
								cout<<"*";
							if (field_1_copy[i][j]==6)
								cout<<"@";
							if ((field_1_copy[i][j]!=0)&&(field_1_copy[i][j]!=5)&&(field_1_copy[i][j]!=6))
								cout<<"#";
						}
							cout<<endl;
				};
			};
			cout<<endl;

			if (p==2)
			{
				for (int i = 0; i<10; i++)
				{
					for (int j = 0; j<10; j++)
						{
							if (field_2_copy[i][j]==0)
								cout<<"~";
							if (field_2_copy[i][j]==5)
								cout<<"*";
							if (field_2_copy[i][j]==6)
								cout<<"@";
							if ((field_2_copy[i][j]!=0)&&(field_2_copy[i][j]!=5)&&(field_2_copy[i][j]!=6))
								cout<<"#";
						}
					cout<<endl;
				};
				cout<<endl;
			};
		};
		
void Field::put_1(int x, int y, int i)
		{
			field_1[x][y]=i;
		};

void Field::put_2(int x, int y, int i)
		{
			field_2[x][y]=i;
		};

void Field::put_1_copy(int x, int y, int i)
		{
			field_1_copy[x][y]=i;
		};

void Field::put_2_copy(int x, int y, int i)
		{
			field_2_copy[x][y]=i;
		};

bool Field::end_of_game(bool end)
		{
			end=false;
			int s1=0,s2=0;
			for (int i=0; i<10; i++)
				for (int j=0; j<10; j++)
				{
					if ((field_1[i][j]!=0)&&(field_1[i][j]!=5)&&(field_1[i][j]!=6))
						s1+=1;
					if ((field_2[i][j]!=0)&&(field_2[i][j]!=5)&&(field_2[i][j]!=6))
						s2+=1;
				};
			if ((s1==0)||(s2==0))
				end=true;
			return end;
		};

bool Field::kill(bool kill, int x, int y, int p)
{
	kill=false;

	if (p==1)
	{
		if (field_2[x-1][y-1]!=0)
			kill=true;
	}

	if (p==2)
	{
		if (field_1[x-1][y-1]!=0)
			kill=true;
	}

	return kill;

};

int Field::able_hit(int can, int x, int y, int player)
{
	can=0;
	if (player==1)
		if (field_2[x][y]!=5)
			can=1;

	if (player==2)
		if (field_1[x][y]!=5)
			can=1;
	return can;
};

int Field::able(int can, int x, int y, int deck, int player)
	{
		
		if (player==1)
		{
			can=0;
			int k=0;

			if ((x+deck-1>9)&&(y+deck-1>9))
				can=3;

			if ((x==0)&&(y+deck-1>9))
			{
				if (y==9)
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;

				if (y!=9)
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;
			}

			if (((x>0)&&(x+deck-1<9))&&(y+deck-1>9))
			{
				if (y==9)
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;

				if (y<9)
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;
			}

			if ((x+deck-1==9)&&(y+deck>9))
			{
				if (y==9)
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;

				if (y!=9)
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;
			}

			if ((y==0)&&(x+deck-1>9))
			{
				if (x==9)
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_1[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;

				if (x!=9)
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;
			}

			if (((y>0)&&(y+deck-1<9))&&(x+deck-1>9))
			{
				if (x==9)
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_1[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;

				if (x<9)
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;
			}

			if ((y+deck-1==9)&&(x+deck-1>9))
			{
				if (x==9)
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_1[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;

				if (x!=9)
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;
			}

			if (can==0)
			{
				if ((x==0)&&(y==0))
				{
					for (int i=x; i<x+deck+1; i++)
						for (int j=y; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y; i<y+deck+1; i++)
						for (int j=x; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x==0)&&((y>0)&&(y+deck-1<9)))
				{
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x==0)&&((y+deck-1)==9))
				{
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if (((x>0)&&(x+deck-1<9))&&(y==0))
				{
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if (((x>0)&&(x+deck-1<9))&&((y>0)&&(y+deck-1<9)))
				{
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if (((x>0)&&(x+deck-1<9))&&(y+deck-1==9))
				{
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x+deck-1==9)&&(y==0))
				{
					for (int i=x-1; i<x+deck; i++)
						for (int j=y; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x+deck-1==9)&&((y>0)&&(y+deck-1<9)))
				{
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x+deck-1==9)&&((y+deck-1)==9))
				{
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_1[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_1[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}
			}
		}


		if (player==2)
		{
			can=0;
			int k=0;

			if ((x+deck-1>9)&&(y+deck-1>9))
				can=3;

			if ((x==0)&&(y+deck-1>9))
			{
				if (y==9)
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;

				if (y!=9)
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_1[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;
			}

			if (((x>0)&&(x+deck-1<9))&&(y+deck-1>9))
			{
				if (y==9)
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_2[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;

				if (y<9)
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;
			}

			if ((x+deck-1==9)&&(y+deck>9))
			{
				if (y==9)
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_2[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;

				if (y!=9)
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=2;
			}

			if ((y==0)&&(x+deck-1>9))
			{
				if (x==9)
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_2[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;

				if (x!=9)
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;
			}

			if (((y>0)&&(y+deck-1<9))&&(x+deck-1>9))
			{
				if (x==9)
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_2[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;

				if (x<9)
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;
			}

			if ((y+deck-1==9)&&(x+deck-1>9))
			{
				if (x==9)
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_2[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;

				if (x!=9)
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
				
				if (k!=0)
					can=3;
				else can=1;
			}

			if (can==0)
			{
				if ((x==0)&&(y==0))
				{
					for (int i=x; i<x+deck+1; i++)
						for (int j=y; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y; i<y+deck+1; i++)
						for (int j=x; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x==0)&&((y>0)&&(y+deck-1<9)))
				{
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x==0)&&((y+deck-1)==9))
				{
					for (int i=x; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if (((x>0)&&(x+deck-1<9))&&(y==0))
				{
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if (((x>0)&&(x+deck-1<9))&&((y>0)&&(y+deck-1<9)))
				{
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck+1; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if (((x>0)&&(x+deck-1<9))&&(y+deck-1==9))
				{
					for (int i=x-1; i<x+deck+1; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+2; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x+deck-1==9)&&(y==0))
				{
					for (int i=x-1; i<x+deck; i++)
						for (int j=y; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y; i<y+deck+1; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x+deck-1==9)&&((y>0)&&(y+deck-1<9)))
				{
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+2; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}

				if ((x+deck-1==9)&&((y+deck-1)==9))
				{
					for (int i=x-1; i<x+deck; i++)
						for (int j=y-1; j<y+1; j++)
							if (field_2[i][j]!=0)
								k=k+1;
					if (k!=0)
						can=1;
					k=0;
					for (int i=y-1; i<y+deck; i++)
						for (int j=x-1; j<x+1; j++)
							if (field_2[j][i]!=0)
								k=k+1;
					if (k!=0)
						can=can+2;
					k=0;
				}
				}
			}

		return can;
	}
