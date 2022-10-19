#include "main.h"

/**
 * print_last_digit - prints the last digit of a number group
 * @r: integer argument passed
 * Return: return an integer when successful
 */


int print_last_digit(int r)
{
	int lastnum = r % 10;

	if (r < 0)
	{
		lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');
	return (lastnum);
}
