#include "main.h"

/**
  *_memcpy - copies n bytes from src to dest
  *@dest: dksjk
  *@src: sds
  *@n: dsszfd
  *Return: A pointer to dest
  */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
