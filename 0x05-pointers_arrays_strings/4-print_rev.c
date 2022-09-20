#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - This program print string in reverse
 *
 * @s: Parameter
 *
 * Return: Always 0
 *
 **/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
