#include "main.h"

/**
 * _strlen - returns length of string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
