#include "main.h"

/**
 *_strlen - get string length
 *@s: String length to check
 *Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
