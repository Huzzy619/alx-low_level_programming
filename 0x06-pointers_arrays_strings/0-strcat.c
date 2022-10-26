#include "main.h"

/**
  *_strcat - concatenates strings
  *@dest: first string
  *@src: second string
  *Return: concatenated strings
  */


char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0'; ++i, ++len)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
