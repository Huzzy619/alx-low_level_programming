#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	char small = tolower(x);

	if (small == 'e' || small == 'q')
		continue;

	putchar(small);
	}
	putchar('\n');
	return (0);
}

