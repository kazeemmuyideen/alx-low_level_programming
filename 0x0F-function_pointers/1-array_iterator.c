#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function given as a
 *		   parameter on each element of an array.
 *
 *@array: pointer to int
 *@size: size of the array
 *@action: Pointer to the function that recieves in
 *
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
