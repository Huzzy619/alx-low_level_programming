#include "main.h"

/**
 *_isupper - is the funtion for this program
 *@c: the number to be checked
 * Return: 1 if true and 0 otherwise
 */

int _isupper(int c)
{

	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
