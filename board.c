#include "board.h"


Sub_Board* sub_board_init(Sub_Board* const sub_board)
{
	for(int i = 0; i < 9; i++)
	{
		sub_board->squares[i] = 0;
	}
	sub_board->winner = 0;
	return sub_board;
}

Board* board_init(Board* const board)
{
	board->sub_boards = malloc(board->sub_boards, sizeof(struct sub_boards) * 9);
}

Board* board_play_turn(Board* const board, int player, int sub_board_num, int x, int y);

int board_find_winner(const Board* const board);
Sub_Board* get_sub_board(const Board* const board);
void print_board(const Board* const board);

int sub_board_find_winner(const Sub_Board* const sub_board);
Sub_Board* sub_board_play_turn(Sub_Board* const sub_board, int x, int y)
{
	if(i > 8 || i < 0)
	{
		printf("Error: value is greater than allowed value");
	}
	return board->sub_boards[i];
}

