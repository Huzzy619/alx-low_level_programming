#include "main.h"

/**
 *rev_string - reverses the given string
 *@s: string to be reversed
 *Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int j;
	int c;
	int len;

	while (s[i] != 0)
	{
		i++;
	}

	len = i;
	i = 0;
	j = len - 1;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
