#include "main.h"

/**
  *print_last_digit - returns absolute values
  *@n : number to be checked
  *Return: Always 0.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit);
	return (0);
}
