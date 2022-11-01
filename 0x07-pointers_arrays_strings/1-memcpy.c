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
	while (n)
	{
		*(dest++) = *(src++);
		--n;
	}

	return (dest);

}
