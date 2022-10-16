#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
	char small = tolower(x);

	putchar(small);
	}
	for (int x = 'A'; x <= 'Z'; x++)
	{
	char big = x;

	putchar(big);
	}
	putchar('\n');
	return (0);
}

