#include "main.h"
#include <string.h>

/**
 * _strncat - A function that concatenate 2 strings
 *
 * @dest: Variable 1 that accept string
 *
 * @src: Variable 2 that accept strings
 *
 * @n: size of src
 *
 * Return: Always 0
 **/

char *_strncat(char *dest, char *src, int n)
{
	char string_concate[100];
	string_concate = strncat(dest, src, n);

	return (string_concate);
}
