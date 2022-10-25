#include "main.h"

/**
  *swap_int - swap values
  *@a:parameter to be swapped
  *@b:swapped with b
  *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
