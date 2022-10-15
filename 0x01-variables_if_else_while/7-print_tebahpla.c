#include <stdio.h>

/**
 *main - print alphabets in reversed order
 *Return: 0, when program runs successfully
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
