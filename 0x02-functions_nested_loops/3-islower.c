#include "main.h"

/**
 *_islower - is the funtion for this program
 *@c: the number to be checked
 * Return: 1 if true and 0 otherwise
 */

int _islower(int c)
{

	if (c > 96 || c < 123)
		return (1);
	else
		return (0);
}
