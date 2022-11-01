#include "main.h"
#include <string.h>

/**
 *_strstr - search for the first occurnce of a string
 *@haystack: where to search from
 *@needle: word to search
 *Return: The searched string
 */

char *_strstr(char *haystack, char *needle)
{
	static char *ptr;

	ptr = haystack;

	while (*ptr)
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
