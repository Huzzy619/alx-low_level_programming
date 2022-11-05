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
	int result;
	int x;

	if (argc == 1)
	{

		printf("%d\n", argc - 1);

		return (1);
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
		result = result + atoi(argv[x]);
		x++;
	}

	printf("%d\n", result);


	return (0);
}

