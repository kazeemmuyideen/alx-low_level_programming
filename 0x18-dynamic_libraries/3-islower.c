#include "main.h"

/**
 * _islower - This function that checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 if not
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
