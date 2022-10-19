#include "main.h"

/**
 *print_sign - is the funtion for this program
 *@c: the number to be checked
 * Return: 1 if true and 0 otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (c < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
