#include "main.h"
#include <string.h>

/**
 *_strpbrk - search for a string
 *@s: pointer
 *@accept: character to look out for
 *Return: A pointer to c or Null
 */

char _strpbrk(char *s, char *accept)
{

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}

	}
	return (NULL);
}
