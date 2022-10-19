#include "main.h"

/**
  * main - check the code
  * Return: Always 0.
 */

/*int main(void)
{

	_putchar(print_alphabet());
	_putchar('\n');
	return (0);
}*/

void print_alphabet(void)
{
	int x; 
	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}

