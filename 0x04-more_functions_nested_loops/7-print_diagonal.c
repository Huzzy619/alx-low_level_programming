#include "main.h"

/**
  *print_line - print lines
  *@n: indicating length of line
  *Return: Always 0
  */


void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		while (n > 0)
		{
		_putchar(' ');
		n--;
		}
		_putchar('\');
		_putchar('\n');
	}
}

