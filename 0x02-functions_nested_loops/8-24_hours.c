#include "main.h"
/**
 * jack_bauer - function that prints the 24 hour clock showing every minute.
 * / 10 allows second digit to rotate
 * the for loop ends at 23:59
 * Return: 24 hour with each minute on a line
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
