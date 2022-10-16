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

	for (x = 0; x < 10; x++)
	{
	putchar(x % 10 + '0');
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
	char small = tolower(y);
	if (small == 'g')
		break;
	putchar(small);
	}
	putchar('\n');
	return (0);
}

