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

	for (x = 0; x < 10; x++)
	{
	char num = x;

	printf("%d", num);
	}
	putchar('\n');
	return (0);
}

