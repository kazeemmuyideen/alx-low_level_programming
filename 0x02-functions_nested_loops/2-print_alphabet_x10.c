#include "main.h"

/**
 * print_alphabet_x10 - unction that prints 10 times the alphabet, in lowercase
 *	followed by a new line.
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int num = 1;

	while (num < 10)
	{
		for (letter =  'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');

		num++;
	}

}
