#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	
}
