#include "main.h"

/**
 *rev_string - reverses the given string
 *@s: string to be reversed
 *Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

	while (i > 0)
	{
		i--;
		_putchar(str[i]);
	}
	_putchar('\n');
}
