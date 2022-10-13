#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 *		or which the cmp function does not return 0
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: It recieves the array off integers
 *
 * Return: If no element matches, return -1
 *
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/*If size <= 0 && if no element is in the array*/
	if ((size <= 0) || (!array || !cmp))
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
