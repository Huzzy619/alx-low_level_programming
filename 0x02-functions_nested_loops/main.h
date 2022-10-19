#include "_putchar.c"
#include <ctype.h>
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
