#include "main.h"

/**
  *print_diagonal - print lines
  *@n: indicating length of line
  *Return: Always 0
  */


void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	if (n <= 0)
		_putchar('\n');

	else
	{
		while (x < n)
		{
			while(y < x){

				_putchar(' ');
				y++;
			}
			x++;
		y = 0;
		_putchar('\\');
		_putchar('\n');
		}
	}
}

