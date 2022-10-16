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

	for (x = 'Z'; x >= 'A'; x--)
	{
	char small = tolower(x);

	putchar(small);
	}
	putchar('\n');
	return (0);
}

