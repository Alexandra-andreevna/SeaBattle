#ifndef __FIELD_H
#define __FIELD_H

class Field

{
	protected:
		int field_1[10][10];
		int field_2[10][10];
		int field_1_copy[10][10];
		int field_2_copy[10][10];
	public:
		Field();

		void show_field_for_player(int p);
		void show_field_for_player_copy(int p);
		
		void put_1(int x, int y, int i);
		void put_2(int x, int y, int i);
		void put_1_copy(int x, int y, int i);
		void put_2_copy(int x, int y, int i);

		bool end_of_game(bool end);
		bool kill(bool kill, int x, int y, int p);
		int able_hit(int can, int x, int y, int player);
		int able(int can, int x, int y, int deck, int player);
};
 
#endif
