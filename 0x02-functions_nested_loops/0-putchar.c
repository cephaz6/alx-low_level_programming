#include <stdio.h>

/**
 * main: prints _putchar, followed by a new line
 * Return: 0 when successful
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	};
	_putchar('\n');
	return (0);
}