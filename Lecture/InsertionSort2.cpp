/*Part One: The things we want to use*/
#include<stdio.h>
int hand;
int data[8]; // data[0] ... data[7]


void print()
{
	printf("%d ", data[0]);
	printf("%d ", data[1]);
	printf("%d ", data[2]);
	printf("%d ", data[3]);
	printf("%d ", data[4]);
	printf("%d ", data[5]);
	printf("%d ", data[6]);
	printf("%d ", data[7]);
	printf("%d ||", data[8]);
	printf("%d\n", hand);
}


/* Part Two: The things we want to do*/
/* - the program will start in a procedure called main
   - this is implemented as a single instruction
   - but any single instruction in C++ can be replaced by round braces
   */
int main() 
{
	data[0] = 1; // assignment
	data[1] = 3; // assignment
	data[2] = 5; // assignment
	data[3] = 4; // assignment
	data[4] = 7; // assignment
	data[5] = 2; // assignment
	data[6] = 9; // assignment
	data[7] = 8; // assignment
/*	data[8] = 1; // Forbidden!*/

	int sorted_to = 1; // every place <  sorted_to is sorted
	while (sorted_to < 8)
	{
		//
		print();
		hand = data[sorted_to];
		int empty_slot;
		empty_slot = sorted_to;
		// empty_slot shall get smaller and smaller until?
		while (hand < data[empty_slot - 1] and empty_slot >0)
		{
			data[empty_slot] = data[empty_slot - 1];
			empty_slot = empty_slot - 1;
		}
		data[empty_slot] = hand;
		sorted_to = sorted_to + 1;
	};

}



