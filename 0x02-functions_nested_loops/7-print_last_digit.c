#include "main.h"

/**
 * print_last_digit - This function print out the last digit of a given number
 *
 * @n: The parameter used
 *
 * Return: 0 success
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
