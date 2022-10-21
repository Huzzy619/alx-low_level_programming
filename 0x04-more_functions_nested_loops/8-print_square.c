#include "main.h"

/**
  *print_square - print squares
  *@size: indicating size of the square
  *Return: Always 0
  */

void print_square(int size)
{
	int i = 0;
	int y = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			y = 0;
			i++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

