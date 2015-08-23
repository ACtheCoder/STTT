#include "board.h"


Sub_Board* sub_board_init(Sub_Board* const sub_board)
{
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			sub_board->squares[i][j] = 0;
	sub_board->winner = 0;
	return sub_board;
}

Board* board_init(Board* const board)
{
	//board->sub_boards = malloc(board->sub_boards, sizeof(struct sub_boards) * 9);
	for(int i = 0; i < 9; i++)
	{
		sub_board_init(&(board->sub_boards[i]));
	}
	return board;
}

Board* board_play_turn(Board* const board, int player, int sub_board_num, int x, int y)
{
	return board;
}

int board_find_winner(const Board* const board)
{
	return 0;
}
Sub_Board* get_sub_board(Board* const board, int sub_board_num)
{
	return &(board->sub_boards[sub_board_num]);
}

void print_board(const Board* const board)
{
}

int sub_board_find_winner(const Sub_Board* const sub_board)
{
	return 0;
}
Sub_Board* sub_board_play_turn(Sub_Board* const sub_board, int x, int y)
{
	if(x > 3 || x < 0 || y > 3 || y < 0 )
	{
		printf("Error: value is greater than allowed value");
	}
	return sub_board;
}

