#include <stdio.h>

/**
 *main - prints alphabets in lowercase
 *Return: 0 when program runs completely
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet < 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
