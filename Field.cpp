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
				field_copy_1[i][j]=0;
				field_copy_2[i][j]=0;
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
								cout<<field_1[i][j];
							};
						cout<<" ";
						for (int j = 0; j<10; j++)
							{
								cout<<field_copy_2[i][j];
							};
						cout<<endl;
					};
				cout<<endl;
			};

			if (p==2)
			{
				for (int i = 0; i<10; i++)
					{
						for (int j = 0; j<10; j++)
							{
								cout<<field_2[i][j];
							};
						cout<<" ";
						for (int j = 0; j<10; j++)
							{
								cout<<field_copy_1[i][j];
							};
						cout<<endl;
					};
				cout<<endl;
			};
		};

void Field::end(bool end)
		{
			int s1=0;
			int s2=0;
			for (int i=0; i<10; i++)
				for (int j=0; j<10; j++)
				{
				s1=s1+field_1[i][j];
				s2=s2+field_2[i][j];
				};
			cout<<s1<<" "<<s2<<endl;
			if ((s1==0)||(s2==0))
				end=true;
			cout<<end;
		}
		
void Field::put_1(int x, int y, int i)
		{
			field_1[x][y]=i;
		};
void Field::put_copy_1(int x, int y, int i)
		{
			field_copy_1[x][y]=i;
		};
void Field::put_2(int x, int y, int i)
		{
			field_2[x][y]=i;
		};
void Field::put_copy_2(int x, int y, int i)
		{
			field_copy_2[x][y]=i;
		};
