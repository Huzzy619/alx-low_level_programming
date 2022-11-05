#include <stdio.h>
#include "main.h"


/**
  *main - the entry point
  *@argc: argument count
  *@argv: argument vector which is an array
  *Return: 1
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);
}

