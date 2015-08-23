#ifndef BOARD_H
#define BOARD_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Sub_Board_{
	//0 will denote no one
	//1 is player 1
	//2 is player 2
	int squares[3][3];
	int winner;
};


struct Board_{
	//an array of sub_board where 0th board  corresponds to the sub board
	//at the top left hand corner and the 8th board corresponds to the sub
	//board at the bottom right hand corner
	struct Sub_Board_ sub_boards [9];
};

typedef struct Sub_Board_ Sub_Board;
typedef struct Board_ Board;

//Initialization functions
Sub_Board* sub_board_init(Sub_Board* const sub_board);
Board* board_init(Board* const board);

//Board functions
Board* board_play_turn(Board* const board, int player, int sub_board_num, int x, int y);
int board_find_winner(const Board* const board);
Sub_Board* get_sub_board(Board* const board, int sub_board_num);
void print_board(const Board* const board);


//Sub_board functions
int sub_board_find_winner(const Sub_Board* const sub_board);
Sub_Board* sub_board_play_turn(Sub_Board* const sub_board, int x, int y);

//Other functions

#endif

