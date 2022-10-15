#include <stdio.h>

/**
 *main - print all possible combinations of 2-digits
 *Return: 0 when successful
 */

int main(void)
{
	int singles;
	int doubles;

	for (doubles = '0'; doubles <= '9'; doubles++)
	{
		for(singles = '0'; singles <= '9'; singles++)
		{
			putchar(doubles);
			putchar(singles);

			if (doubles != '8' || (singles != '9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
