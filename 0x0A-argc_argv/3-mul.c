#include <stdio.h>
#include <stdlib.h>
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
	int y;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);


	return (0);
}

