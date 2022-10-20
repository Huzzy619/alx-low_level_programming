#include "main.h"

/**
  *print_most_numbers - print numbers from 0-9
  *Return: Always return 0
  */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;

		_putchar(i);
	}
	putchar('\n');
}
