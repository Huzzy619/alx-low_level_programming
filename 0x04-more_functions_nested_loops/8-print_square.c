#include "main.h"
/**
  *print_square - print lines
  *@n: indicating length of line
  *Return: Always 0
  */

void print_square(int n)
{
	int i;
	int y;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (y = 1; y <= n; y++)
				_putchar('#');
				_putchar('\n');
		}
		_putchar('\n');
	}
}

