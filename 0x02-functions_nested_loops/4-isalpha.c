#include "main.h"

/**
 *_isalpha - is the funtion for this program
 *@c: the number to be checked
 * Return: 1 if true and 0 otherwise
 */

int _isalpha(int c)
{

	if (c > 64 && c < 91)
		return (1);

	else
	{
		if (c > 96 && c < 123)
			return (1);
		else
			return (0);
	}
}
