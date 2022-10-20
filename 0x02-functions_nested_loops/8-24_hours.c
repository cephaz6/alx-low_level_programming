#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * Return: returns 0 on successful 
 */

void jack_bauer(void)
{
	int x;
	int y;
	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x + '0');
			}
			else if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			if (y < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(y);
			}
			else if (y >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			_putchar(x);
			_putchar(':');
			_putchar(y);
		}
	}
}
