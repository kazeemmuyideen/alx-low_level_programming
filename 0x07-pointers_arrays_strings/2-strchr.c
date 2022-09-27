#include "main.h"
/**
* _strchr- a function that locates a char in a string
* @s: a pointer given by main
* @c: the char to look for
*
* Description: returns the first occurance of the char c in string
* Return: returns a pointer to the first occurance
**/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
