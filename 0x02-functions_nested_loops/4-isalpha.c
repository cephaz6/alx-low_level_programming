#include "main.h"


/**
 * _isalpha - checks for alphabet
 * @c: character  variable
 * Return: 1 if c is a letter or 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
