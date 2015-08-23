#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "board.h"

int CHAR_SIZE = 2;

int main(int argc, char** argv)
{
	int numPlayers = 0;
	if(argc == 1)
	{
		numPlayers = 1;
	}
	else
	{
		if(strcmp(argv[1], "-m") == 0)
		{
			numPlayers = 2;
		}
		else
		{
			printf("Unrecognized option: %s\n", argv[1]);
			exit(0);
		}
	}

	Board board;
	board_init(&board);
	int players_turn = 0;
	char response[CHAR_SIZE];
	if(numPlayers == 1)
	{
		/*while(board_find_winner(&board) == 0)
		{
			
		}*/
		printf("Currently unimplemented.\n");
	}
	else
	{
		printf("Who goes first? 1) Player 1 or 2) Player 2\n");
		scanf("%1s", &(response[0]));
		response[1] = '\0';
		printf("%s\n", &(response[0]));
		/*while(board_find_winner(&board) == 0)
		{
		}*/
	}
	
}
