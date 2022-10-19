#include <stdio.h>
#include <unistd.h>

int _putchar(char text)
{
	return (write(1, &text, 1));
}
