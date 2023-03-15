#include "main.h"
/**
 * _isalpha - this program prints 1 if c is uppercase or lowercase, 0 if not,
 *
 * @c: The character to be checked
 *
 * Return: 1 if letter is capital and 0, if not
 **/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
