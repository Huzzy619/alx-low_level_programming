#include "main.h"

/**
  *print_line - print lines
  *@n: indicating length of line
  *Return: Always 0
  */


void print_line(int n)
{

	while( n > 0 )
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

