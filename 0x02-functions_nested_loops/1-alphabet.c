#include "main.h"

/**
 * print_alphabet - unction that prints 10 times the alphabet, in lowercase,
 *	followed by a new line.
 *
 */

void print_alphabet(void)
{
	int letter;

	for (letter =  'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
