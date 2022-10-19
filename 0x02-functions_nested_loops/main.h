#ifndef MAIN_H
#define MAIN_H
#include <ctype.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

void print_alphabet(void)
{
	int x;
	for (x = 'A'; x <= 'Z'; x++)
	{
		char letter = tolower(x);
		_putchar(letter);

	}
	_putchar('\n');
	return;
}
#endif
