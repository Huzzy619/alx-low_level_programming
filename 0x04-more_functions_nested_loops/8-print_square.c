#include "main.h"

/**
  *print_square - print lines
  *@n: indicating length of line
  *Return: Always 0
  */


void print_square(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (i = 1; i <= n; i++)
				_putchar('#');
				_putchar('\n');
		}
		_putchar('\n');
	}
}

