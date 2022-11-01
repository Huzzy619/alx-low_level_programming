#include "main.h"

/**
  *_strchr - locate c
  *@s: pointer
  *@c: character to look out for
  *Return: A pointer to c or Null
  */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}

/**
 *_strspn - get length of prefix
 *@s: pointer
 *@accept: character to look out for
 *Return: A pointer to c or Null
 */

unsigned int *_strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && _strchar(accept, *s++))
	{
		len++;
	}
	return (len);


}
