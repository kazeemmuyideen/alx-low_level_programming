#include "main.h"
#include <string.h>

/**
 * reverse_array - A function that array in reverse form
 *
 * @a: Variable 1 that accept integer
 *
 * @n: number of element in the array
 *
 * Return: Always 0
 **/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}

}
