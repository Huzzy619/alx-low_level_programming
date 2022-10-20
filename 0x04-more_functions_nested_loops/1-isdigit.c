#include "main.h"

/**
 *_isdigit - is the funtion for this program
 *@c: the number to be checked
 * Return: 1 if true and 0 otherwise
 */

int _isdigit(int c)
{

	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
