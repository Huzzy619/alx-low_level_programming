#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"


/**
  *main - the entry point
  *@argc: argument count
  *@argv: argument vector which is an array
  *Return: 1
 */

int main(int argc, char *argv[])
{
	long int result;
	int x;
	int y;

	if (argc == 1)
	{

		printf("%d\n", argc - 1);

		return (0);
	}

	argc = argc - 1;
	x = 1;
	while (argc--)
	{
		if (!isdigit(*argv[x]))
		{
			printf("Error\n");
			return (1);
		}

		y = atoi(argv[x]);

		result = result + y;
		x++;
	}

	printf("%ld\n", result);


	return (0);
}

