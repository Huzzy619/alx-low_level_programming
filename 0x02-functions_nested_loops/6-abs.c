#include "main.h"

/**
  *_abs - returns absolute values
  *@n : number to be checked
  *Return: Always 0.
 */

int _abs(int n)
{
	/*return (n * ((2 * n + 1) % 2));*/
	n = n > 0 ? n : ~n + 1;
	return (n);
}
