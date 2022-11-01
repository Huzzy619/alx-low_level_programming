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
	char *cdest =(char *) dest;
	char *csrc = (char *) src;

	for (i = 0; i < n; i++)

		cdest[i] = csrc[i];

	return (cdest);

}
