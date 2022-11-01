#include "main.h"
#include <string.h>
/**
 *_strspn - get length of prefix
 *@s: pointer
 *@accept: character to look out for
 *Return: A pointer to c or Null
 */

unsigned int *_strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);


}
