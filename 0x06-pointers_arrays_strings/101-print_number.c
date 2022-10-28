#include "mainn.h"

/**
 * print_number - prints an integer
 * @n: value to be printed
 *
 *
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}

	/* Repeat the process if the digit is still divisible by 10 */

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
