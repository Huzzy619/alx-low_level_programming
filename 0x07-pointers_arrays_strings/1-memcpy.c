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
	char *cdest = (char *)dest;
	char *csrc = (char *)src;

	if ((cdest != NULL) && (csrc != NULL))
	{
		while (n)
		{
			*(cdest++) = *(csrc++);
			--n;
		}
	}
	return (dest);

}
