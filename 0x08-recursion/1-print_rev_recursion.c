#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - Function that prints string in reverse form
*
* @s:  parameter
*/

void _print_rev_recursion(char *s)
{

	if (*s)
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
