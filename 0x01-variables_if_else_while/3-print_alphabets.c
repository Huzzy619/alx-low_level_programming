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
	int y;

	for (x = 'A'; x <= 'Z'; x++)
	{
	char small = tolower(x);

	putchar(small);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
	char big = y;

	putchar(big);
	}
	putchar('\n');
	return (0);
}

