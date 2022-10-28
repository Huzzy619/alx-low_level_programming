#include "main.h"

/**
  *_strncpy - copies strings
  *@dest: first string
  *@src: second string
  *@n: number of bytes to use
  *Return: concatenated strings
  */


char *_strncpy(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
