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
