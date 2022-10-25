#include "main.h"


/**
 * print_rev - prints strings in reverse
 * @str: string
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;	
	
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
