#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 *@n: the value of the parameter
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}

	return (n);

}
