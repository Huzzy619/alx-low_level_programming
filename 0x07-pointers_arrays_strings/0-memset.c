#include "main.h"

/**
  *_memset - fills the first n bytes
  *@s: dksjk
  *@b: sds
  *@n: dsszfd
  *Return: A pointer to the memory area
  */


char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);

}
