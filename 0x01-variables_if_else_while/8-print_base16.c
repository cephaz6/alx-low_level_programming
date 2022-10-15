#include <stdio.h>

/**
 *main - print all numbers of base 16
 *print all in lowercase
 *Return: 0, when program runs successfully
 */

int main(void)
{
	int numb;
	char hexrep;

	for (numb = 48; numb < 58; numb++)
	{
		putchar(numb);
	}
	for (hexrep = 'a'; hexrep <= 'f'; hexrep++)
	{
		putchar(hexrep);
	}
	putchar('\n');
	return (0);
}
