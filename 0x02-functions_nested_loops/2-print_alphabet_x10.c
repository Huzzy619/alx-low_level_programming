#include "main.h"

/**
  * print_alphabet_x10 - check the code
  * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x;
	int y = 1;

	while (y <= 10)
	{

		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
		y++;
	}
}

