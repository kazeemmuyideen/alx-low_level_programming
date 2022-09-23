#include "main.h"
#include <ctype.h>

/**
 * string_toupper - A function that changes all lowercase letters of i
 *		a string to uppercase.
 *@str: pointer
 *
 *
 *
 * Return: Always 0
 **/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] > 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}

		index++;
	}

	return (str);
}
