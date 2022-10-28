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

	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);

}
