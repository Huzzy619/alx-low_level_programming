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
	printf("%d\n", argc);

	(void)*argv;

	return (0);
}

