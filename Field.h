#ifndef __FIELD_H
#define __FIELD_H

class Field

{
	protected:
		int field_1[10][10];
		int field_2[10][10];
		int field_copy_1[10][10];
		int field_copy_2[10][10];

	public:
		Field();

		void show_field_for_player(int p);

		void end(bool end);
		
		void put_1(int x, int y, int i);
		void put_copy_1(int x, int y, int i);
		void put_2(int x, int y, int i);
		void put_copy_2(int x, int y, int i);
		
};

#endif
